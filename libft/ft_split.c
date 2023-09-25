/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:43:22 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/23 17:48:34 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (result == 0)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > k)
		{
			result[j] = ft_substr(s, k, i - k);
			j++;
		}
	}
	result[j] = 0;
	return (result);
}
