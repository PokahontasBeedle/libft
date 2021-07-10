/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:13:04 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 13:13:04 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	c;
	char	*temp;
	size_t	i;

	i = 0;
	c = (char) ch;
	temp = (char *) str;
	while (temp[i])
		i++;
	if (c == '\0')
		return (&temp[i]);
	while (i)
		if (temp[--i] == c)
			return (&temp[i]);
	return (NULL);
}
