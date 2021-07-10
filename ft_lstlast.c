/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 10:47:18 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/13 10:47:19 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst->next;
	}
	return (lst);
}
