/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:01:43 by jagarci2          #+#    #+#             */
/*   Updated: 2023/10/02 19:31:31 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
