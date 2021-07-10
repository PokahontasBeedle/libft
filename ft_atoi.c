/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:35:42 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/11 16:31:49 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char			*tmp;
	int				sign;
	unsigned long	res;
	unsigned long	lim;

	lim = (unsigned long)((long)(FT_ULONG_MAX >> 1) / 10);
	sign = 1;
	res = 0;
	tmp = (char *)str;
	while (*tmp == '\f' || *tmp == '\r' || *tmp == ' '
		|| *tmp == '\t' || *tmp == '\n' || *tmp == '\v')
		tmp++;
	if (*tmp == '-')
		sign = -1;
	if (*tmp == '+' || sign == -1)
		tmp++;
	while (ft_isdigit(*tmp))
	{
		if ((res > lim || (res == lim && (*tmp - '0') > 7)) && sign == 1)
			return (-1);
		else if ((res > lim || (res == lim && (*tmp - '0') > 8)) && sign == -1)
			return (0);
		res = (res * 10) + (*tmp++ - '0');
	}
	return (res * sign);
}
