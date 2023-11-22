/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:56:37 by jagarci2          #+#    #+#             */
/*   Updated: 2023/11/22 20:00:59 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n > 0)
	{
		while (str1[i] != '\0' && str2[i] != '\0' && i < (n - 1))
		{
			if (str1[i] != str2[i])
				return (str1[i] - str2[i]);
			i++;
		}
	}
	else
		return (0);
	return (str1[i] - str2[i]);
}
