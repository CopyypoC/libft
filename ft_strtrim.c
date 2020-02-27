/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:21:53 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/25 11:19:52 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		end;

	if (s == NULL)
		return (NULL);
	end = ft_strlen(s);
	start = 0;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t') &&
			s[start] != '\0')
		start++;
	if (s[start] == '\0')
	{
		str = ft_strnew(1);
		return (str);
	}
	if (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t')
	{
		end--;
		while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end > 0)
			end--;
	}
	str = ft_strnew(end - start + 2);
	str = ft_strncpy(str, s + start, end - start + 1);
	return (str);
}
