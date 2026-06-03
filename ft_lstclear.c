/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:36:04 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/02 16:53:18 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	temp;
    
	if (!*list || !list || !del)
		return ;
	while (list && *list)
	{
		temp = (*list) -> next;
		ft_lstdelone(*list, del);
		list = temp;
	}
}
