/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:19:04 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/21 20:30:41 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	find_c;
	int		i;

	str = (char *)s;
	find_c = (char)c;
	i = ft_strlen(str);
	if (find_c == '\0')
		return (str + i);
	while (i >= 0)
	{
		if (str[i] == find_c)
			return (str + i);
		i--;
	}
	return (NULL);
}
