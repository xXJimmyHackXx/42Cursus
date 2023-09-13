/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:18:52 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/13 18:52:36 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libre.h"
#include <stdio.h>

int	main(void)
{
	char	bzero[] = "hola, que tal";
	char	mset[] = "hola, que tal";
	char	mstr2[] = "hola, que tal";
	char	emstr2[100];
	char	mcpy[] = "hola, que tal";
	char	emcpy[100];

	printf("\n");
	printf("ISALNUM\n");
	printf("FT: %d\n", ft_isalnum('1'));
	printf("O: %d\n", isalnum('5'));
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
	printf("FT: %s\n", ft_memset(mset, '$', 5));
	printf("O: %s\n", memset(mset, '$', 5));
	printf("MEMCPY\n");
	ft_memcpy(emcpy, mcpy, sizeof(mcpy));
	printf("FT: %s\n", emcpy);
	printf("O: %s\n", memcpy(emstr2, mstr2, sizeof(mstr2)));
	printf("BZERO\n");
	ft_bzero(bzero, 2);
	printf("FT: %s\n", bzero);
	printf("O: %s\n", bzero(bzero, 2));
}
