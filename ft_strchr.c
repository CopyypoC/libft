/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:04:47 by wiwang            #+#    #+#             */
/*   Updated: 2020/03/02 12:45:29 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	chr;
	int		i;

	str = (char *)s;
	chr = (char)c;
	i = 0;
	if (chr == '\0')
		return (str + ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	return (NULL);
}
