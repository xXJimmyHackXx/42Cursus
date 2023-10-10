#include "libft.h"
#include <stdio.h>

int main()
{
	char	mstr2[] = "hola, que tal";
	char	emstr2[100];
	// char	mcpy[] = "hola, que tal";
	// char	emcpy[100];

	printf("----------------\n");
	printf("MEMCPY\n");
//	ft_memcpy(emcpy, NULL, sizeof(mcpy));
	//printf("FT: %s\n", emcpy);
	memcpy(emstr2, NULL, sizeof(mstr2));
	printf("O: %s\n", emstr2);
	printf("----------------\n");
}