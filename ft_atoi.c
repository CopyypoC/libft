/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:15:52 by wiwang            #+#    #+#             */
/*   Updated: 2020/03/02 13:04:25 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	make_num(char *s, int i, long num, char sign)
{
	if (s[i] == '-')
		sign = '-';
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		num = (num * 10) + (s[i++] - '0');
	if (num < 0 && sign == '+')
		return (-1);
	if (num < 0 && sign == '-')
		return (0);
	if (sign == '-')
		return (num * -1);
	else
		return (num);
}

int			ft_atoi(const char *str)
{
	char	*s;
	int		i;
	long	num;
	char	sign;

	s = (char *)str;
	i = 0;
	num = 0;
	sign = '+';
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v' ||
			s[i] == '\r' || s[i] == '\f')
		i++;
	return (make_num(s, i, num, sign));
}
