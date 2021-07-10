/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:12:25 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 15:54:56 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)arr;
	while (n)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}
