/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/30 13:47:42 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 32

char	*get_next_line(int fd)
{
	static char	*var;
	char		*buf;
	char		*line;
	int			bt_read;

	var = "";
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	line = ft_strdup("");
	if (!line)
	{
		free(buf);
		return (NULL);
	}
	bt_read = 1;
	while (!ft_strchr(var, '\n') && bt_read > 0)
	{
		bt_read = read(fd, buf, BUFFER_SIZE);
		if (bt_read == -1)
		{
			free(buf);
			free(line);
			return (NULL);
		}
		buf[bt_read] = '\0';
		line = ft_strjoin(line, buf);
	}
	free(buf);
	if (bt_read == 0)
	{
		char *tmp = var;
		var = NULL;
		free(tmp);
		return (NULL);
	}

	return (get_line(&var, line));
}
