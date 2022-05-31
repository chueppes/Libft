/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna_calvo <acalvo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:21:39 by anna_calvo        #+#    #+#             */
/*   Updated: 2022/05/30 22:31:24 by anna_calvo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst)
	{
		(*del)((*lst)->content);
		free(lst);
		lst++;
	}
	lst=NULL;
}
