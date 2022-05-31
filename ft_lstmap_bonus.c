/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:32:29 by acalvo4           #+#    #+#             */
/*   Updated: 2022/05/31 12:06:13 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listA;
	t_list	*listB;

	listB = 0;
	while (lst)
	{
		listA = ft_lstnew(f(lst->content));
		if (!listA)
		{
			ft_lstclear(&listB, del);
			return (listB);
		}
		ft_lstadd_back(&listB, listA);
		lst = lst->next;
	}
	return (listB);
}
