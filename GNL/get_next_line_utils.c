/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:12:05 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/30 13:50:39 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 || !s2)
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
	return (result);
}

char	*get_line(char **remainder, char *line)
{
    char	*tmp;
    char	*newline;

    if (!remainder)
        return (NULL);
    newline = ft_strchr(line, '\n');
    if (newline)
    {
        *newline = '\0';
        tmp = ft_strdup(newline + 1);
        if (*remainder)
            free(*remainder);
        *remainder = tmp;
    }
    else
    {
        if (*remainder)
            free(*remainder);
        *remainder = NULL;
    }
    return (line);
}
