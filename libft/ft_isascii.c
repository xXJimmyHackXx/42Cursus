/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:53:37 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/13 12:56:40 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libre.h"

int	ft_isascii(int str)
{
	if (str >= 0 && str <= 127)
		str++;
	else
		return (0);
	return (1);
}
