/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:27:46 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/21 19:38:05 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*target;
	unsigned char		*copy;

	target = (unsigned char *)dst;
	copy = (unsigned char *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len > 0)
		{
			len--;
			target[len] = copy[len];
		}
	}
	return (dst);
}
