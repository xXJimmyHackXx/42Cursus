/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/25 20:07:22 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	char	*buf;
	int		size;
	char	c;
	int		bytes_read;

	bytes_read = read(fd, &c, 1);
	size = 0;
	buf = malloc(1);
	while (bytes_read > 0)
	{
		if (c == '\n')
			break;
		size++;
		buf
	}
	return (buf);
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
