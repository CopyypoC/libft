/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:07:46 by wiwang            #+#    #+#             */
/*   Updated: 2020/03/02 11:40:07 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*target;
	unsigned char		*copy;
	size_t				i;

	target = (unsigned char *)dst;
	copy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		target[i] = copy[i];
		if (copy[i] == (unsigned char)c)
			return (dst + 1 + i);
		i++;
	}
	return (NULL);
}
