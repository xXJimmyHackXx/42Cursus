/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:46:30 by kali              #+#    #+#             */
/*   Updated: 2023/10/06 17:24:49 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear_miau(t_list **new, t_list **val, void (*del)(void *))
{
	*val = (*new)->next;
	del((*new)->content);
	free(*new);
	*new = *val;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*val;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		val = ft_lstnew(content);
		if (!val)
		{
			del(content);
			while (new)
				ft_lstclear_miau(&new, &val, del);
			lst = NULL;
			return (0);
		}
		ft_lstadd_back(&new, val);
		lst = lst->next;
	}
	return (new);
}
