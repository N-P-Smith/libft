/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:04:42 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 12:54:06 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!list || !new)
		return ;
	new -> next = *list;
	*list = new;
}
/*
int	main(void)
{
	t_list  **list = NULL;
	t_list  *new = NULL;
    
	ft_lstadd_front(list, new);
}*/
