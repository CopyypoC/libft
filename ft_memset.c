/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:27:37 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/20 13:52:11 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;
	size_t			i;

	string = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		string[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
