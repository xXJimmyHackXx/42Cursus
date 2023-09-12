/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libexec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:18:52 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/11 18:07:33 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libre.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d", ft_isalnum(' '));
	printf("%d", ft_isalpha('d'));
	printf("%d", ft_isdigit('1'));
	printf("%d", ft_isalnum(' '));
	printf("%d", ft_isprint('s'));
	printf("%lu", ft_strlen("balablab"));
	printf("\n");
	printf("%d", isalnum(' '));
	printf("%d", isalpha('d'));
	printf("%d", isdigit('1'));
	printf("%d", isalnum(' '));
	printf("%d", isprint('s'));
	printf("%lu", strlen("balablab"));
}
