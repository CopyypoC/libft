/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:57:13 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/24 15:57:17 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	str = (char *)malloc(ft_strlen(s) * sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
