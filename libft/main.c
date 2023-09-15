/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:18:52 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/15 14:06:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libre.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	fbzero[] = "hola, que tal";
	char	obzero[] = "hola, que tal";
	char	mset[] = "hola, que tal";
	char	mstr2[] = "hola, que tal";
	char	emstr2[100];
	char	mcpy[] = "hola, que tal";
	char	emcpy[100];
	char	mm[] = "hola, que tal";
	char	emm[100];
	char	mm2[] = "hola, que tal";
	char	emm2[100];
	char	strl[] = "hola, que";
	char	estl[100];
	char	strl2[] = "hola, que";
	char	estrl2[100];

	printf("_______________\n");
	printf("ISALNUM\n");
	printf("FT: %d\n", ft_isalnum(' '));
	printf("O: %d\n", isalnum(' '));
	printf("_______________\n");
	printf("ISALPHA\n");
	printf("FT: %d\n", ft_isalpha(' '));
	printf("O: %d\n", isalpha(' '));
	printf("_______________\n");
	printf("ISDIGIT\n");
	printf("FT: %d\n", ft_isdigit(' '));
	printf("O: %d\n", isdigit(' '));
	printf("_______________\n");
	printf("ISPRINT\n");
	printf("FT: %d\n", ft_isprint(' '));
	printf("O: %d\n", isprint(' '));
	printf("_______________\n");
	printf("ISASCII\n");
	printf("FT: %d\n", ft_isascii(' '));
	printf("O: %d\n", isascii(' '));
	printf("_______________\n");
	printf("STRLEN\n");
	printf("FT: %lu\n", ft_strlen("balablab"));
	printf("O: %lu\n", strlen("balablab"));
	printf("_______________\n");
	printf("MEMSET\n");
	ft_memset(mset, '$', 5);
	printf("FT: %s\n", mset);
	memset(mset, '$', 5);
	printf("O: %s\n", mset);
	printf("_______________\n");
	printf("MEMCPY\n");
	ft_memcpy(emcpy, mcpy, sizeof(mcpy));
	printf("FT: %s\n", emcpy);
	memcpy(emstr2, mstr2, sizeof(mstr2));
    printf("O: %s\n", emstr2);
	printf("_______________\n");
	printf("BZERO\n");
	ft_bzero(fbzero, 2);
	printf("FT: %s\n", fbzero);
	bzero(obzero, 2);
	printf("O: %s\n", obzero);
	printf("_______________\n");
	printf("MEMMOVE\n");
	ft_memmove(emm2, mm2, sizeof(mm2));
	printf("FT: %s\n", emm2);
	memmove(emm, mm, sizeof(mm));
	printf("O: %s\n", emm);
	printf("_______________\n");
	printf("STRLCPY\n");
	ft_strlcpy(estrl2, strl2, sizeof(strl2));
	printf("FT: %s || LEN: %ld\n", estrl2, sizeof(strl2));
	strlcpy(estl, strl, sizeof(strl));
	printf("O: %s || LEN: %ld\n", estl, sizeof(strl));
	printf("_______________\n");
	
}
