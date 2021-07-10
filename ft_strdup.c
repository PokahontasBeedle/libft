/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:12:46 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 15:55:19 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dstr;
	size_t	i;

	i = 0;
	dstr = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
	if (dstr)
	{
		while (str[i])
		{
			dstr[i] = str[i];
			i++;
		}
		dstr[i] = '\0';
	}
	return (dstr);
}
