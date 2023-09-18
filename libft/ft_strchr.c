/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:23:11 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/18 16:53:19 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char *)str;
	while (str2[i] != '\0')
	{
		if (str2[i] == (unsigned char)c)
		{
			return ((char *)&str2[i]);
		}
		i++;
	}
	if (str2[i] == (unsigned char)c)
	{
		return ((char *)&str2[i]);
	}
	return (NULL);
}
