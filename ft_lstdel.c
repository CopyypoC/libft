/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:15:52 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/28 14:41:45 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *cur;
	t_list *tmp;

	cur = *alst;
	tmp = *alst;
	while (alst && del && cur)
	{
		cur = cur->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = cur;
	}
	*alst = NULL;
}
