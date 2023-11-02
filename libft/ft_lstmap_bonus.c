/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:46:30 by kali              #+#    #+#             */
/*   Updated: 2023/10/31 12:49:52 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear_miau(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
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
			ft_lstclear_miau(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, val);
		lst = lst->next;
	}
	return (new);
}