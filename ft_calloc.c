/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:12:11 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 13:12:14 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*pam;
	size_t	i;

	i = 0;
	pam = (char *)malloc(number * size);
	if (!pam)
		return (NULL);
	ft_bzero(pam, number * size);
	return (pam);
}
