/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:36:02 by nbeedle           #+#    #+#             */
/*   Updated: 2021/04/28 19:36:05 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	mem_offset;

	mem_offset = 0;
	while (mem_offset < n)
	{
		*(unsigned char *)(s + mem_offset) = 0;
		mem_offset++;
	}
}
