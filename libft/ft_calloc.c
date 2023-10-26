/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:15:11 by jagarci2          #+#    #+#             */
/*   Updated: 2023/10/25 19:59:47 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	result = malloc(count * size);
	if (result == 0)
		return (0);
	ft_bzero(result, count * size);
	return (result);
}
