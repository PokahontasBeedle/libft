/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:12:51 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 15:58:51 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	size_t	d_len;

	s_len = ft_strlen (src);
	d_len = ft_strlen (dst);
	i = 0;
	j = 0;
	if (!ft_memchr (dst, '\0', size))
		return (s_len + size);
	while (*dst && size > 0)
	{
		dst++;
		i++;
		size--;
	}
	while (*src && size-- > 1 )
	{
		*dst++ = *src++;
		j++;
	}
	*dst = '\0';
	return (s_len + d_len);
}
