/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:10:01 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/27 21:27:29 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *new;

	while (lst != NULL)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		lst = f(lst);
		new = lst;
		lst = lst->next;
	}
	return (new);
}
