/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:12:21 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 15:54:58 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(destination + i) = *(unsigned char *)(source + i);
		if (*(unsigned char *)(source + i) == (unsigned char)c)
			return (destination + i + 1);
		i++;
	}
	return (NULL);
}
