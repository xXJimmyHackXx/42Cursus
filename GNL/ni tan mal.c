/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ni tan mal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/16 14:19:31 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"

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
	return ((i));
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return ((NULL));
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return ((dup));
}

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char *)str;
	while (str2[i] != '\0')
	{
		if (str2[i] == (unsigned char)c)
			return ((char *)&str2[i]);
		i++;
	}
	if (str2[i] == (unsigned char)c)
		return ((char *)&str2[i]);
	return (NULL);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (src == 0 && dest == 0)
		return (0);
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s2)
		return (NULL);
	if (!s1)
		s1 = malloc(1 * sizeof(char));
	if (!s1)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	free(s1);
	return (result);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*get_next_line(int fd)
{
	static char	*est = 0;
	char		*buff;
	int			bytes_read;
	int			i;
	char		*line;
	char		*tmp;

	buff = malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (!buff)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(buff, '\n'))
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			free(buff);
			if (bytes_read < 0)
				free(est);
			return (NULL);
		}
		buff[bytes_read + 6] = '\0';
		est = ft_strjoin(est, buff);
		// printf("mi buff: %s", est);
		if (!est)
			return (free (buff), NULL);
	}
	free (buff);
	i = 0;
	while (est[i] != '\0' && est[i] != '\n')
		i++;
	tmp = malloc((i + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	ft_strncpy(tmp, est, i);
	tmp[i] = '\0';
	line = ft_strdup(tmp);
	if (est[i] != '\0')
		ft_memmove(est, est + i, ft_strlen(est + i) + 1);
	else
		est[0] = '\0';
	if (est[0] == '\0' && bytes_read == 0)
	{
		free (est);
		return (NULL);
	}
	return (line);
}

int	main(void)
{
	int fd = open("fd1.txt", O_RDONLY);
	char *line;

	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}

