/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:07:46 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/26 18:36:05 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*target;
	const unsigned char	*copy;
	size_t				i;
	int					*nullptr;

	target = (unsigned char *)dst;
	copy = (const unsigned char *)src;
	i = 0;
	nullptr = NULL;
	while (i < n)
	{
		target[i] = copy[i];
		if (target[i] == (unsigned char)c)
			return (dst + 1 + i);
		i++;
	}
	return (nullptr);
}
