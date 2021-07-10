/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:16:57 by nbeedle           #+#    #+#             */
/*   Updated: 2021/04/28 13:12:26 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	mem_offset;

	mem_offset = 0;
	while (mem_offset < len)
	{
		*(unsigned char *)(b + mem_offset) = (unsigned char)c;
		mem_offset++;
	}
	return (b);
}
