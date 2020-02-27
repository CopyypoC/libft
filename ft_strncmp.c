/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:55:55 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/22 14:12:39 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	if (str1[0] == '\0' || str2[i] == '\0')
		return (str1[0] - str2[0]);
	while ((str1[i] != '\0' && str2[i] != '\0') && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		if ((str1[i] == '\0' || str2[i] == '\0') && (i < n))
			return (str1[i] - str2[i]);
	}
	return (0);
}
