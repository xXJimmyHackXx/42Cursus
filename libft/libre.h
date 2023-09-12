/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libre.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:10:17 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/11 17:59:55 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		str++;
	else
		return (0);
	return (1);
}

int	ft_isascii(int str)
{
	if (str >= 0 && str <= 126)
		str++;
	else
		return (0);
	return (1);
}


int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')
		str++;
	else
		return (0);
	return (1);
}

int	ft_isalnum(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')
		|| (str >= '0' && str <= '9'))
		str++;
	else
		return (0);
	return (1);
}

int	ft_isprint(int str)
{
	if (str >= 0 && str <= 126)
		str++;
	else
		return (0);
	return (1);
}

unsigned long	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
