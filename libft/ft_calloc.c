/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:15:11 by jagarci2          #+#    #+#             */
/*   Updated: 2023/10/10 15:42:52 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;

	if ((count * size) == INT_MAX || (count * size) == INT_MIN)
		return (NULL);
	result = malloc(count * size);
	if (result == 0)
		return (0);
	ft_bzero(result, count * size);
	return (result);
}
