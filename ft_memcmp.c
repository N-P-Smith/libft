/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:34:10 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 18:37:15 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t size)
{
	unsigned char	*chr1;
	unsigned char	*chr2;

	chr1 = (unsigned char *)mem1;
	chr2 = (unsigned char *)mem2;
	if (size == 0)
		return (0);
	while (*chr1 == *chr2 && size-- > 0)
	{
		chr1++;
		chr2++;
	}
	return ((int)(*chr1 - *chr2));
}
