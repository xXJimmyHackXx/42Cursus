/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:46:13 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/18 00:32:58 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')
		|| (str >= '0' && str <= '9'))
		str++;
	else
		return (0);
	return (1);
}
