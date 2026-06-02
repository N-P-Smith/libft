/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:54:33 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/02 17:04:10 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *list, void (*func)(void *))
{
    if (!list || !func)
        return ;
    while (list)
    {
        func(list -> content);
        list = list -> next;
    }
}