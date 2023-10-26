/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/26 13:34:02 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

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
	int		len;

	len = ft_strlen(s1);
	i = 0;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1 || !dup)
		return (0);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	if (result)
	{
		ft_strlcpy(result, (char *)str1, len1 + len2 + 1);
		ft_strlcat(result, (char *)str2, len1 + len2 + 1);
	}
	return (result);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	total_len;
	char			*ssrc;
	size_t			i;

	ssrc = (char *)src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (ssrc[i] && dst_len + 1 < dstsize)
	{
		dst[dst_len] = ssrc[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (total_len);
}

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
			if (!line)
				line = ft_strdup(buf);
			else
				line = ft_strjoin(line, buf);
			size = 0;
		}
		buf[size] = c;
		size++;
	}
	if (size > 0)
	{
		buf[size] = '\0';
		if (!line)
			line = t_strdup(buf);
		else
			line = ft_strjoin(line, buf);
	}
	free(buf);
	return (line);
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
