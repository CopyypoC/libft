/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:19:04 by wiwang            #+#    #+#             */
/*   Updated: 2020/03/02 12:47:53 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	chr;
	int		i;

	str = (char *)s;
	chr = (char)c;
	i = ft_strlen(str);
	if (chr == '\0')
		return (str + i);
	while (i >= 0)
	{
		if (str[i] == chr)
			return (str + i);
		i--;
	}
	return (NULL);
}
