/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:14:55 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/26 18:28:53 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dest, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dest[i] == '\0')
		return ((char *)src);
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (src[i + j] == dest[j] && i + j < len)
		{
			if (dest[j + 1] == '\0')
				return ((char *)&src[i]);
			j++;
		}
		i++;
	}
	return (0);
}
