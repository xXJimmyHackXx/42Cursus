/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ni tan mal copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/20 18:52:30 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"

// #include <unistd.h>
// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>

// #define BUFFER_SIZE 32

// size_t	ft_strlen(const char *str)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return ((i));
// }

// char	*ft_strdup(const char *s1)
// {
// 	char	*dup;
// 	int		i;

// 	i = 0;
// 	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
// 	if (!dup)
// 		return ((NULL));
// 	while (s1[i])
// 	{
// 		dup[i] = s1[i];
// 		i++;
// 	}
// 	dup[i] = '\0';
// 	return ((dup));
// }

// char	*get_next_line(int fd)
// {
// 	size_t totalbytesread = 0;
// 	size_t buffer_size = BUFFER_SIZE;
// 	char *buffer = (char *)malloc(buffer_size + 1 * sizeof(char));
// 	int bytesread = 1;

// 	if (buffer == NULL)
// 		return (NULL);
// 	while (bytesread > 0)
// 	{
// 		bytesread = read(fd, buffer + totalbytesread, 1);

// 		if (bytesread > 0)
// 		{
// 			if (buffer[totalbytesread] == '\n' || buffer[totalbytesread] == '\r')
// 			{
// 				buffer[totalbytesread] = '\0'; // Reemplaza '\n' o '\r' con '\0'
// 				char *line = ft_strdup(buffer);
// 				if (line == NULL)
// 				{
// 					free(buffer);
// 					return (NULL);
// 				}

// 				totalbytesread++;
// 				return (line);
// 			}

// 			totalbytesread++;

// 			if (totalbytesread >= buffer_size - 1)
// 			{
// 				char *temp = (char *)malloc((buffer_size * 2 + 1) * sizeof(char));
// 				if (temp == NULL)
// 				{
// 					free(buffer);
// 					return (NULL);
// 				}

// 				size_t i = 0;
// 				while (i < buffer_size)
// 				{
// 					temp[i] = buffer[i];
// 					i++;
// 				}

// 				free(buffer);
// 				buffer = temp;
// 				buffer_size *= 2;
// 			}
// 		}
// 	}
// 	if (totalbytesread == 0)
// 	{
// 		free(buffer);
// 		return (NULL);
// 	}
// 	char *line = ft_strdup(buffer);
// 	free(buffer);
// 	return (line);
// }





// int main()
// {
//     // Supongamos que fd es el descriptor de archivo que deseas leer.
//     int fd = open("fd1.txt", O_RDONLY);

//     if (fd == -1)
//     {
//         perror("Error al abrir el archivo");
//         return (1);
//     }

//     char *line;

//     // Llamar a get_next_line en un bucle while
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         // Imprimir la línea leída
//         printf("%s\n", line);

//         // Liberar la memoria asignada para la línea
//         free(line);
//     }

//     // Cerrar el descriptor de archivo al finalizar la lectura
//     close(fd);

//     return (0);
// }

