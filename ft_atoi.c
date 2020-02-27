/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:15:52 by wiwang            #+#    #+#             */
/*   Updated: 2020/02/22 17:50:23 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*s;
	int		i;
	int		num;
	char	sign;

	s = (char *)str;
	i = 0;
	num = 0;
	while (s[i] >= 1 && s[i] <= 32)
	{
		if (s[i++] == '\e')
			return (0);
	}
	if (!((s[i] == '-') || (s[i] == '+')) &&
		!((s[i + 1] >= '0') && (s[i + 1] <= '9')))
		return (0);
	else if (s[i] == '-' || s[i] == '+')
		sign = s[i++];
	while (s[i] >= '0' && s[i] <= '9')
		num = (num * 10) + (s[i++] - '0');
	if (sign == '-')
		return (num * -1);
	else
		return (num);
	return (0);
}
