/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 17:05:07 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 18:15:22 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*func)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*obj;

	if (!func || !del)
		return (NULL);
	new = NULL;
	while (list)
	{
		obj = ft_lstnew(func(list -> content));
		if (!obj)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, obj);
		list = list -> next;
	}
	return (new);
}
