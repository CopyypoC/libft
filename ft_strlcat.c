/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:12:51 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/21 20:02:31 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	catlen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	catlen = 0;
	while ((src[catlen] != '\0') && ((dstlen + catlen + 1) < dstsize))
	{
		dst[dstlen + catlen] = src[catlen];
		catlen++;
	}
	dst[dstlen + catlen] = '\0';
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	else
		return (srclen + dstlen);
}
