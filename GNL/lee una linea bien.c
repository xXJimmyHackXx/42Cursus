/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lee una linea bien.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/11 18:55:46 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 32

char	*get_next_line(int fd)
{
	size_t	totalbytesread;
	size_t	buffer_size;
	char	*buffer;
	int		bytesread;
	char	*temp;
	size_t	i;

	buffer_size = BUFFER_SIZE;
	buffer = (char *)malloc(buffer_size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	totalbytesread = 0;
	bytesread = read(fd, buffer + totalbytesread, buffer_size);
	while (bytesread > 0)
	{
		if (buffer[totalbytesread] == '\n')
		{
			buffer[totalbytesread + 1] = '\0';
			break ;
		}
		totalbytesread += bytesread;
		if (totalbytesread >= buffer_size - 1)
		{
			temp = (char *)malloc(buffer_size * 2 * sizeof(char));
			if (temp == NULL)
			{
				free(buffer);
				return (NULL);
			}
			i = 0;
			while (i < buffer_size)
			{
				temp[i] = buffer[i];
				++i;
			}
			free(buffer);
			buffer = temp;
			buffer_size *= 2;
		}
		bytesread = read(fd, buffer + totalbytesread, buffer_size);
	}
	if (bytesread == -1 || (bytesread == 0 && totalbytesread == 0))
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

int	main(void)
{
	int	fd = open("fd1.txt", O_RDONLY);
	char	*primera_linea = get_next_line(fd);

	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		exit(EXIT_FAILURE);
	}
	// printf("\n--------------------------\n");
	// printf("Primera línea: %s", primera_linea);
	// printf("--------------------------\n\n");
	free(primera_linea);
	close(fd);
	return (0);
}

