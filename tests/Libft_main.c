/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:14:13 by jagarci2          #+#    #+#             */
/*   Updated: 2023/10/10 19:32:56 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_content(void *content)
{
	if (content)
		ft_putstr_fd(content, 1);
}

char	ft_2toupper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void	ft_1toupper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

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
	char	stri[] = "hola, que tal";
	char	strmap[] = "hola, que tal";
	t_list	*list;
	t_list	*lista;
	t_list	*listb;

	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*listj;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnewone(str);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);



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
	printf("MEMCHR\n");
	printf("FT: %s\n", ft_memchr("holaoooo", 'a', 4));
	printf("O: %s\n", memchr("holaoooo", 'a', 4));
	printf("----------------\n");
	printf("MEMCMP\n");
	printf("FT: %d\n", ft_memcmp("hola", "hola", 4));
	printf("O: %d\n", memcmp("hola", "hola", 4));
	printf("----------------\n");
	printf("STRNSTR\n");
	printf("FT: %s\n", ft_strnstr("hola", "la", 4));
	printf("O: %s\n", strnstr("hola", "la", 4));
	printf("----------------\n");
	printf("ATOI\n");
	printf("FT: %d\n", ft_atoi("  -+--+-+1234ab567"));
	printf("O: %d\n", atoi("  -+--+-+1234ab567"));
	printf("----------------\n");
	printf("CALLOC\n");
	printf("FT: %s\n", ft_calloc(5, 5));
	printf("O: %s\n", calloc(5, 5));
	printf("----------------\n");
	printf("STRDUP\n");
	printf("FT: %s\n", ft_strdup("hola"));
	printf("O: %s\n", strdup("hola"));
	printf("----------------\n");
	printf("SUBSTR\n");
	printf("FT: %s\n", ft_substr("hola", 0, 5));
	printf("----------------\n");
	printf("STRJOIN\n");
	printf("FT: %s\n", ft_strjoin("hola", "que tal"));
	printf("----------------\n");
	printf("STRTRIM\n");
	printf("FT: %s\n", ft_strtrim("	hola, que tal", "d"));
	printf("----------------\n");
	printf("SPLIT\n");
	printf("FT: %s\n", ft_split("hola, que tal", ',')[0]);
	printf("----------------\n");
	printf("ITOA\n");
	printf("FT: %s\n", ft_itoa(123456789));
	printf("----------------\n");
	printf("STRLCAT\n");
	printf("FT: %lu\n", ft_strlcat("hola", "que tal", 2));
	printf("O: %lu\n", strlcat("hola", "que tal", 2));
	printf("----------------\n");
	printf("STRMAPI\n");
	printf("FT: %s\n", ft_strmapi(strmap, ft_2toupper));
	printf("----------------\n");
	printf("STRITERI\n");
	ft_striteri(stri, ft_1toupper);
	printf("FT: %s\n", stri);
	printf("----------------\n");
	printf("PUTCHAR_FD\n");
	ft_putchar_fd('a', 1);
	printf("\n");
	printf("----------------\n");
	printf("PUTSTR_FD\n");
	ft_putstr_fd("hola, que tal", 1);
	printf("\n");
	printf("----------------\n");
	printf("LSTNEW\n");
	list = ft_lstnew("Hola");
	printf("%s\n", list->content);
	printf("----------------\n");
	printf("LSTADD_FRONT\n");
	ft_lstadd_front(&list, ft_lstnew("Que tal"));
	printf("%s\n", list->content);
	printf("----------------\n");
	printf("LSTSIZE\n");
	printf("%d\n", ft_lstsize(list));
	printf("----------------\n");
	printf("LSTLAST\n");
	printf("%s\n", ft_lstlast(list)->content);
	printf("----------------\n");
	printf("LSTADD_BACK\n");
	ft_lstadd_back(&list, ft_lstnew("Adios"));
	printf("%s\n", ft_lstlast(list)->content);
	printf("----------------\n");
	printf("LSTITER\n");
	lista = ft_lstnew(ft_strdup("Hello, "));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("world!")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup(" How ")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("are ")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("you?")));
	ft_lstiter(lista, print_content);
	ft_lstclear(&lista, free);
	printf("\n");
	printf("----------------\n");
	printf("LSTMAP\n");
	listb = ft_lstnew(ft_strdup("Hello, "));
	ft_lstadd_back(&listb, ft_lstnew(ft_strdup("world!")));
	ft_lstadd_back(&listb, ft_lstnew(ft_strdup(" How ")));
	ft_lstadd_back(&listb, ft_lstnew(ft_strdup("are ")));
	ft_lstadd_back(&listb, ft_lstnew(ft_strdup("you?")));
	lista = ft_lstmap(listb, ft_strdup, free);
	ft_lstiter(lista, print_content);
	return (0);
}
