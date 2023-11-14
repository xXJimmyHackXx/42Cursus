/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/14 19:11:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 32

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char *get_next_line(int fd)
{
    char buffer[BUFFER_SIZE];
    char *line = NULL;
    size_t total_bytes_read = 0;
    ssize_t bytes_read;

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0'; // Agregar un terminador nulo al final del buffer
        char *newline_pos = strchr(buffer, '\n');

        if (newline_pos != NULL)
        {
            *newline_pos = '\0'; // Reemplaza '\n' con '\0'
            line = ft_strdup(buffer);
            return line;
        }
        else
        {
            char *temp = (char *)malloc((total_bytes_read + bytes_read + 1) * sizeof(char));
            if (temp == NULL)
                return NULL;

            for (size_t i = 0; i < total_bytes_read; ++i)
                temp[i] = line[i];

            for (ssize_t i = 0; i < bytes_read; ++i)
                temp[total_bytes_read + i] = buffer[i];

            temp[total_bytes_read + bytes_read] = '\0'; // Agregar un terminador nulo al final

            free(line);
            line = temp;
            total_bytes_read += bytes_read;
        }
    }

    if (bytes_read == 0 && total_bytes_read == 0)
        return NULL;

    return line;
}

int main()
{
    // Supongamos que fd es el descriptor de archivo que deseas leer.
    int fd = open("fd1.txt", O_RDONLY);

    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return 1;
    }

    char *line;

    // Llamar a get_next_line en un bucle while
    while ((line = get_next_line(fd)) != NULL)
    {
        // Imprimir la línea leída
        printf("%s\n", line);

        // Liberar la memoria asignada para la línea
        free(line);
    }

    // Cerrar el descriptor de archivo al finalizar la lectura
    close(fd);

    return 0;
}

