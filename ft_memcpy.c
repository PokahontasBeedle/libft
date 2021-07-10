/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:12:31 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 15:54:50 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *destination, const void *source, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)destination;
	s = (char *)source;
	if (!d && !s)
		return (d);
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (destination);
}
