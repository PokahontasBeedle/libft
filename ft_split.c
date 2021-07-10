/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 10:47:56 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/13 10:47:57 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	ft_word_chr(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
			i++;
		while (s[j] && s[j] != c)
			j++;
	}
	return (i);
}

static int	ft_word_length(char const *s, char c)
{
	int		i;

	while (*s)
	{
		if (*s != c)
			break ;
		s++;
	}
	i = 0;
	while (*s)
	{
		if (*s == c)
			break ;
		i++;
		s++;
	}
	return (i);
}

static char	**loop_strplit(char const *s, char **word,
			char separator, int nbr_words)
{
	int		i;
	int		size;
	char	*str;

	str = (char *)s;
	i = 0;
	if (!str)
		return (NULL);
	while (i < nbr_words)
	{
		size = ft_word_length(str, separator);
		word[i] = (char *)malloc(sizeof(char) * (size + 1));
		if (!str)
			return (NULL);
		if (!(word[i]))
			return (NULL);
		ft_strncpy(word[i], str, size);
		word[i][size] = 0;
		str += size;
		while (*str == separator)
			++str;
		++i;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	int		nbr_words;

	if (!s)
		return (NULL);
	nbr_words = ft_word_chr(s, c);
	word = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (!word)
		return (0);
	while (*s == c)
		s++;
	word = loop_strplit(s, word, c, nbr_words);
	return (word);
}
