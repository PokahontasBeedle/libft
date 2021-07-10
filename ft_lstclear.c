/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 10:46:55 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/13 10:49:15 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cleanlst;

	while (*lst)
	{
		cleanlst = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = cleanlst;
	}
	*lst = NULL;
}
