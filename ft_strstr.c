/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:31:23 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/22 12:12:39 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	int		i;
	int		j;
	int		k;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[0] == '\0')
		return (h);
	while (h[i] != '\0')
	{
		k = i;
		while (h[i++] == n[j++])
		{
			if (n[j] == '\0')
				return (h + k);
		}
		j = 0;
	}
	return (NULL);
}
