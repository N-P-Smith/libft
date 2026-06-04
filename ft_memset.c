/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:19:58 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 18:36:57 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int chr, size_t size)
{
	unsigned char	*temp;

	temp = (unsigned char *) mem;
	while (size > 0)
	{
		*(temp++) = (unsigned char) chr;
		size--;
	}
	return (mem);
}
