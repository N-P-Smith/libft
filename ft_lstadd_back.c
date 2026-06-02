/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:59:57 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/02 16:11:17 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **list, t_list *new)
{
    t_list  last;
    
    if (!new)
        return ;
    if (!*list)
    {
        *list = new;
        return ;
    }     
    last = ft_lstlast(*list);
    last -> next = new; 
}