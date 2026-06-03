/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:18:57 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/02 15:35:05 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int	size;
    
	if (!list)
		return (0);
	size = 1;
	while (list -> next != NULL)
	{
		list = list -> next;
		size++;
	}
	return (size);
}
/*
int	main(void)
{
	t_list	list = "Test";
    
	ft_lstsize(&list);
}*/
