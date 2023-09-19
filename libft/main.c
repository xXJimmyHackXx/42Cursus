/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:14:13 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/19 18:57:43 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	fbzero[] = "hola, que tal";
	char	obzero[] = "hola, que tal";
	char	mset[] = "hola, que tal";
	char	mset2[] = "hola, que tal";
	char	mstr2[] = "hola, que tal";
	char	emstr2[100];
	char	mcpy[] = "hola, que tal";
	char	emcpy[100];
	char	mm[] = "hola, que tal";
	char	emm[100];
	char	mm2[] = "hola, que tal";
	char	emm2[100];
	char	strl[] = "6789";
	char	estl[100] = "12345";
	char	strl2[] = "6789";
	char	estrl2[100];
	char 	tup = 'a';
	char 	tup2 = 'a';
	char 	tlw = 'A';
	char 	tlw2 = 'A';
	char	strc[] = "hola, que tal";
	char	srtrcc[] = "hola, que tal";

	printf("----------------\n");
	printf("ISALNUM\n");
	printf("FT: %d\n", ft_isalnum('5'));
	printf("O: %d\n", isalnum('5'));
	printf("----------------\n");
	printf("ISALPHA\n");
	printf("FT: %d\n", ft_isalpha('m'));
	printf("O: %d\n", isalpha('m'));
	printf("----------------\n");
	printf("ISDIGIT\n");
	printf("FT: %d\n", ft_isdigit(' '));
	printf("O: %d\n", isdigit(' '));
	printf("----------------\n");
	printf("ISPRINT\n");
	printf("FT: %d\n", ft_isprint(' '));
	printf("O: %d\n", isprint(' '));
	printf("----------------\n");
	printf("ISASCII\n");
	printf("FT: %d\n", ft_isascii(' '));
	printf("O: %d\n", isascii(' '));
	printf("----------------\n");
	printf("STRLEN\n");
	printf("FT: %lu\n", ft_strlen("balablab"));
	printf("O: %lu\n", strlen("balablab"));
	printf("----------------\n");
	printf("MEMSET\n");
	ft_memset(mset, '$', 5);
	printf("FT: %s\n", mset);
	memset(mset2, '$', 5);
	printf("O: %s\n", mset);
	printf("----------------\n");
	printf("MEMCPY\n");
	ft_memcpy(emcpy, mcpy, sizeof(mcpy));
	printf("FT: %s\n", emcpy);
	memcpy(emstr2, mstr2, sizeof(mstr2));
	printf("O: %s\n", emstr2);
	printf("----------------\n");
	printf("BZERO\n");
	ft_bzero(fbzero, 2);
	printf("FT: %s\n", fbzero);
	bzero(obzero, 2);
	printf("O: %s\n", obzero);
	printf("----------------\n");
	printf("MEMMOVE\n");
	ft_memmove(emm2, mm2, 100);
	printf("FT: %s\n", emm2);
	memmove(emm, mm, 100);
	printf("O: %s\n", emm);
	printf("----------------\n");
	printf("STRLCPY\n");
	ft_strlcpy(estrl2, strl2, sizeof(2));
	printf("FT: %s || LEN: %ld\n", estrl2, sizeof(estrl2));
	strlcpy(estl, strl, sizeof(2));
	printf("O: %s || LEN: %ld\n", estl, sizeof(estl));
	printf("----------------\n");
	printf("TOUPPER\n");
	printf("FT: %c\n", ft_toupper(tup));
	printf("O: %c\n", toupper(tup2));
	printf("----------------\n");
	printf("TOLOWER\n");
	printf("FT: %c\n", ft_tolower(tlw));
	printf("O: %c\n", tolower(tlw2));
	printf("----------------\n");
	printf("STRCHR\n");
	printf("FT: %s\n", ft_strchr(strc, 'q'));
	printf("O: %s\n", strchr(strc, 'q'));
	printf("----------------\n");
	printf("STRRCHR\n");
	printf("FT: %s\n", ft_strrchr(srtrcc, 'a'));
	printf("O: %s\n", strrchr(srtrcc, 'a'));
	printf("----------------\n");
	printf("STRNCMP\n");
	printf("FT: %d\n", ft_strncmp("holb", "hola", 4));
	printf("O: %d\n", strncmp("holb", "hola", 4));
	printf("----------------\n");
	return (0);
}
