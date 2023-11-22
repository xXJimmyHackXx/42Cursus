/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:46:30 by kali              #+#    #+#             */
/*   Updated: 2023/11/22 13:34:22 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*fok;
	void	*a;

	l = 0;
	while (lst != NULL && (*f) && (*del))
	{
		a = (*f)(lst->content);
		fok = ft_lstnew(a);
		if (!fok || !a)
		{
			del(a);
			ft_lstclear(&l, (*del));
			free(fok);
			return (0);
		}
		ft_lstadd_back(&l, fok);
		lst = lst->next;
	}
	return (l);
}
