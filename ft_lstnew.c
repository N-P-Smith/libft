/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:21:25 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/02 12:05:56 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list    *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node -> content = content;
    node -> next = NULL;
    return (node);
}

int main(void)
{
    ft_lstnew("Test");
}