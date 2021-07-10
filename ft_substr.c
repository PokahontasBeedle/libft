/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:13:11 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/11 09:45:57 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*podstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	podstr = malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (!podstr)
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	while (s[i])
	{
		if (i >= start && j < len)
			podstr[j++] = s[i];
		i++;
	}
	podstr[j] = '\0';
	return (podstr);
}
