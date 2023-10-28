/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:12:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/28 11:26:40 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	
}

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
