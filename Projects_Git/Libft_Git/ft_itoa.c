/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:32:29 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/26 20:02:36 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		sign;

	size = ft_nbrlen(n);
	sign = 1;
	if (n < 0)
		sign = -1;
	str = malloc(size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	while (size > 0)
	{
		str[size - 1] = (n % 10) * sign + '0';
		n = n / 10;
		size--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
