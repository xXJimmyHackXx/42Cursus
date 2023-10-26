/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/26 19:09:09 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*buf;
	char		*line;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	line = ft_strdup("");
	bytes_read = read(fd, buf, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (ft_strchr(buf, '\n'))
		{
			line = ft_strjoin(line, buf);
			break ;
		}
	}
	free(buf);
	if (bytes_read < 0)
		return (NULL);
	if (bytes_read == 0 && !remainder)
		return (NULL);
	return (get_line(&remainder, line));
}

#include <time.h>

int	main(void)
{
	int		fd;
	char	*s;

	clock_t start = clock();
	fd = open("fd1.txt", O_RDONLY);
	while (1)
	{
	s = get_next_line(fd);
	printf("%s", s);
		free(s);
		break;
	}
	float seconds = (float)(clock() - start) / CLOCKS_PER_SEC;
	printf ("%.2f ds\n", seconds);
	return (0);
}
