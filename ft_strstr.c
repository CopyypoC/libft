/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:31:23 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/27 13:37:21 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	int		i;
	int		j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (n[0] == '\0')
		return (h);
	while (h[i] != '\0')
	{
		j = 0;
		while (h[i + j] == n[j])
		{
			if (n[j + 1] == '\0')
				return (h + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
