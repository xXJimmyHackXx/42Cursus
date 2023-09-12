/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:18:52 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/12 18:37:24 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libre.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "hola, que tal";

	printf("\n");
	printf("ISALNUM\n");
	printf("FT: %d\n", ft_isalnum(' '));
	printf("O: %d\n", isalnum(' '));
	printf("ISALPHA\n");
	printf("FT: %d\n", ft_isalpha('d'));
	printf("O: %d\n", isalpha('d'));
	printf("ISDIGIT\n");
	printf("FT: %d\n", ft_isdigit('1'));
	printf("O: %d\n", isdigit('1'));
	printf("ISPRINT\n");
	printf("FT: %d\n", ft_isprint('s'));
	printf("O: %d\n", isprint('s'));
	printf("ISASCII\n");
	printf("FT: %d\n", ft_isascii('3'));
	printf("O: %d\n", isascii('3'));
	printf("STRLEN\n");
	printf("FT: %lu\n", ft_strlen("balablab"));
	printf("O: %lu\n", strlen("balablab"));
	printf("MEMSET\n");
	printf("FT: %s\n", ft_memset(str, '$', 5));
	printf("O: %s\n", memset(str, '$', 5));
	printf("BZERO\n");
	ft_bzero(str, 2);
	printf("FT: %s\n", str);
	printf("O: %s\n", bzero(str, 2));
	printf("_______\n");
}
