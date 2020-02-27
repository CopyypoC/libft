/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:21:53 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/27 13:50:28 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ws_remove(char const *s, char *str, int start, int end)
{
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t') &&
			s[start] != '\0')
		start++;
	if (s[start] == '\0')
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		return (str);
	}
	if (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t')
	{
		end--;
		while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end > 0)
			end--;
	}
	if (!(str = ft_strnew(end - start + 1)))
		return (NULL);
	str = ft_strncpy(str, s + start, end - start + 1);
	return (str);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		end;

	if (s == NULL)
		return (NULL);
	str = NULL;
	end = ft_strlen(s);
	start = 0;
	return (ws_remove(s, str, start, end));
}
