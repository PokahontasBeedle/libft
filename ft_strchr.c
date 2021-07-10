/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:12:27 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/07 16:12:28 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	c;
	size_t			i;
	char			*temp;

	i = 0;
	temp = (char *)str;
	c = (char)ch;
	while (temp[i])
	{
		if (temp[i] == c)
			return (&temp[i]);
		i++;
	}
	if (c == '\0')
		return (&temp[i]);
	return (NULL);
}
