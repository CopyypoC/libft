/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:38:19 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/26 19:45:28 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*target;
	unsigned char		*copy;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (dst);
	target = (unsigned char *)dst;
	copy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		target[i] = copy[i];
		i++;
	}
	return (dst);
}
