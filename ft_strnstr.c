/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:44:58 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/26 20:00:18 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;
	size_t	k;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[0] == '\0')
		return (h);
	while ((i < len) && (h[i] != '\0') && (i < ft_strlen(h)))
	{
		k = i;
		while ((i < len) && (h[i++] == n[j++]))
		{
			if (n[j] == '\0')
				return (h + k);
		}
		j = 0;
	}
	return (NULL);
}
