/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:45:01 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/18 17:29:54 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = src;
	d = dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}
