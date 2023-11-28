/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/28 16:31:33 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
// #include <stdio.h>

// // void leaks()
// // {
// // 	system("leaks -q a.out");
// // }
// int	main(void)
// {
// 	// atexit(leaks);
// 	int fd = open("fd1.txt", O_RDONLY);
// 	int fd2 = open("fd2.txt", O_RDONLY);
// 	int fd3 = open("fd3.txt", O_RDONLY);
// 	int fd4 = open("fd4.txt", O_RDONLY);
// 	int fd5 = open("fd5.txt", O_RDONLY);
// 	int fd6 = open("fd6.txt", O_RDONLY);
// 	char *line;

// 	if (fd == -1)
// 	{
// 		printf("Error al abrir el archivo");
// 		return (1);
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	while ((line = get_next_line(fd2)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	while ((line = get_next_line(fd3)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	while ((line = get_next_line(fd4)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	while ((line = get_next_line(fd5)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	while ((line = get_next_line(fd6)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	return (0);
// }

char	*ft_readed_line(char *start)
{
	int		i;
	char	*line;

	if (!start || !start[0] || start[0] == '\0')
		return (NULL);
	i = 0;
	while (start[i] && start[i] != '\n')
		i++;
	if (start[i] == '\n')
		i++;
	line = malloc(1 + i * sizeof(char));
	if (!line)
		return (ft_free(&line, NULL));
	i = 0;
	while (start[i] && start[i] != '\n')
	{
		line[i] = start[i];
		i++;
	}
	if (start[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_move_start(char	*start)
{
	char	*new_buff;
	int		i;
	int		j;

	i = 0;
	while (start[i] && start[i] != '\n')
		i++;
	if (start[i] == '\0')
		return (ft_free(&start, NULL));
	if (start[i] == '\n')
		i++;
	new_buff = malloc(1 + ft_strlen(start) - i);
	if (!new_buff)
		return (ft_free(&start, NULL));
	j = 0;
	while (start[i + j])
	{
		new_buff[j] = start[i + j];
		j++;
	}
	new_buff[j] = '\0';
	ft_free(&start, NULL);
	return (new_buff);
}

char	*read_file(int fd, char **start_str)
{
	char	*tmp;
	int		fd_read;

	tmp = (char *)malloc(1 + BUFFER_SIZE * sizeof(char));
	if (!tmp)
		return (NULL);
	fd_read = 1;
	while (!(ft_strchr(*start_str, '\n')) && fd_read != 0)
	{
		fd_read = read(fd, tmp, BUFFER_SIZE);
		if (fd_read == -1)
		{
			ft_free(&tmp, NULL);
			return (NULL);
		}
		tmp[fd_read] = '\0';
		*start_str = ft_strjoin(*start_str, tmp);
		if (!*start_str)
			return (ft_free(&tmp, NULL));
	}
	ft_free(&tmp, NULL);
	return (*start_str);
}

char	*get_next_line(int fd)
{
	char		*tmp;
	static char	*start_str[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = read_file(fd, &start_str[fd]);
	if (!tmp)
	{
		if (start_str[fd])
			ft_free(&start_str[fd], NULL);
		return (NULL);
	}
	tmp = ft_readed_line(start_str[fd]);
	if (!tmp)
		return (ft_free(&start_str[fd], NULL));
	start_str[fd] = ft_move_start(start_str[fd]);
	return (tmp);
}
