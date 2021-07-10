/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:13:10 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/07 16:13:11 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*malstr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	malstr = ft_strdup(s);
	if (!malstr)
		return (NULL);
	while (malstr[i])
	{
		malstr[i] = (*f)(i, malstr[i]);
		i++;
	}
	return (malstr);
}
