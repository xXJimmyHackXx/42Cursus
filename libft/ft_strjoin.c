/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:36:14 by jagarci2          #+#    #+#             */
/*   Updated: 2023/10/26 13:26:22 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
