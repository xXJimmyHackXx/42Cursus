/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:41:15 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/13 11:30:12 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libre.h"

int	ft_isprint(int str)
{
	if (str >= 0 && str <= 126)
		str++;
	else
		return (0);
	return (1);
}
