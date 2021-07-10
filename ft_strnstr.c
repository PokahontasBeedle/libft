/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:13:01 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 13:13:01 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	const char	*l;

	l = lit;
	if (*l == '\0')
		return ((char *)big);
	while (len--)
	{
		if (*l == *big)
			l++;
		else
		{
			big -= (l - lit);
			len += (l - lit);
			l = lit;
		}
		big++;
		if (*l == '\0')
			return ((char *)(big - (l - lit)));
		if (*big == '\0')
			break ;
	}
	return (NULL);
}
