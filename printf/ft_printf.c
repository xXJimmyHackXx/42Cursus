/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:31:51 by jagarci2          #+#    #+#             */
/*   Updated: 2023/11/28 19:33:16 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

ft_var_type()
{
	
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	ptr;

	va_start (ptr, str);
	while (str)
	{
		if (str[i] == "%")
		{
			i++;
			ft_var_type()
		}
	}
}
