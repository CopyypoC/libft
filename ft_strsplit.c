/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:21:21 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/25 15:48:28 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		word_count(char const *s, char c)
{
	int wd;
	int i;

	wd = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
		{
			wd++;
			break ;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		wd++;
		if (s[i] == '\0')
		{
			wd++;
			break ;
		}
	}
	return (wd);
}

static	char	**split_malloc(char const *s, char c, int words)
{
	char	**split;
	int		chr;
	int		i;
	int		wd;

	split = (char **)malloc(words * sizeof(char *));
	chr = 0;
	i = 0;
	wd = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while ((s[i] != c && s[i++] != '\0') && chr++ >= 0)
		{
			if (s[i] == '\0')
				break ;
		}
		split[wd++] = (char *)malloc(chr + 1 * sizeof(char));
		chr = 0;
	}
	split[wd] = (char *)malloc(1);
	return (split);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		wd;
	int		chr;
	int		i;

	wd = 0;
	chr = 0;
	i = 0;
	split = split_malloc(s, c, word_count(s, c));
	if (split == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			split[wd][chr++] = s[i++];
		split[wd][chr] = '\0';
		chr = 0;
		wd++;
	}
	split[wd] = NULL;
	return (split);
}
