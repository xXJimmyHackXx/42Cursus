/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/26 12:12:35 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	char	*buf;
	char	*line;
	char	c;
	int		size;
	int		bytes_read;

	size = 0;
	buf = malloc(999);
	line = NULL;
	bytes_read = read(fd, &c, 1);
	while (bytes_read > 0)
	{
		if (c == '\n')
			break ;
		if (size == 998)
		{
			buf[size] = '\0';
		}
	}
}

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("fd1.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	return (0);
}
