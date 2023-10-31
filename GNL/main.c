/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:29:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/30 13:29:43 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <time.h>

int	main(void)
{
	int		fd;
	char	*s;

	fd = open("fd1.txt", O_RDONLY);
	while (s = get_next_line(fd))
	{
		printf("%s", s);
		free(s);
	}
	return (0);
}
