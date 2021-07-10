/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:52:50 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/05 13:53:06 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search_character(char character, char const *set)
{
	char	*tmpstr;

	tmpstr = (char *)set;
	while (*tmpstr)
		if (*tmpstr++ == character)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmpstr;
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	begin = 0;
	while (s1[begin] && ft_search_character(s1[begin], set))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && ft_search_character(s1[end - 1], set))
		end--;
	tmpstr = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (!tmpstr)
		return (NULL);
	i = 0;
	while (begin < end)
		tmpstr[i++] = s1[begin++];
	tmpstr[i] = '\0';
	return (tmpstr);
}
