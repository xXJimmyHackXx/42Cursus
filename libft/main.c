/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:18:52 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/13 13:45:47 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libre.h"
#include <stdio.h>

int	main(void)
{
	char	str[] = "hola, que tal";
	char	mstr[] = "hola, que tal";
	char	estr[14] = "";

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
	
	printf("MEMCPY\n");
	printf("FT: %ds\n", ft_memcpy(estr, str, sizeof(str)));
	printf("%s\n", memcpy(estr, mstr, sizeof(mstr)));
	printf("BZERO\n");
	ft_bzero(str, 2);
	printf("FT: %s\n", str);
	printf("O: %s\n", bzero(str, 2));
}
