/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:08:15 by jagarci2          #+#    #+#             */
/*   Updated: 2023/10/03 20:48:10 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp && tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp && tmp->next == NULL)
		i++;
	return (i);
}
// int	main()
// {
// 	char str[8] = "holaasd";
// 	t_list *lst = ft_lstnew(str);
// 	for (int i = 0;  i < 20; i++)
// 	{
// 		ft_lstadd_front(&lst, ft_lstnew(str));
// 	}
// 	lst->next->next->next = NULL;
// 	lst = NULL;
// 	printf("lst_count ->%d\n", ft_lstsize(lst));
// }