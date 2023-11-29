/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:43:22 by jagarci2          #+#    #+#             */
/*   Updated: 2023/10/03 16:46:05 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	clean(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_len;
	int		i;

	result = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, word_len);
			if (!result[i - 1])
				return (clean(result, i - 1), NULL);
			s += word_len;
		}
	}
	return (result[i] = 0, result);
}
/*int    main(void)
{
    char    **result;
    int        i;

	result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
    i = 0;
    while (result[i] != 0)
    {
        printf("%s", result[i]);
        i++;
    }
    return (0);
}*/