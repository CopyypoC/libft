/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:14:43 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/24 16:30:10 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = (char *)malloc(ft_strlen(s) * sizeof(*s));
	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	return (sub);
}
