/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeedle <nbeedle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 10:47:03 by nbeedle           #+#    #+#             */
/*   Updated: 2021/05/13 10:47:04 by nbeedle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst -> content);
	free (lst);
}
