/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:31:26 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/29 19:33:22 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	j;

	j = 0;
	while (s[j] != '\0')
	{
		write(fd, &s[j], 1);
		j++;
	}
	write(fd, "\n", 1);
}
