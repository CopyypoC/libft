/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:04:47 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/21 21:01:19 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	find_c;
	int		i;

	str = (char *)s;
	find_c = (char)c;
	i = 0;
	if (find_c == '\0')
		return (str + ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] == find_c)
			return (str + i);
		i++;
	}
	return (NULL);
}
