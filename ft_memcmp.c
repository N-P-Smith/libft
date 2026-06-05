/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:34:10 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/05 12:32:49 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t size)
{
	unsigned char	*chr1;
	unsigned char	*chr2;
	size_t			i;

	chr1 = (unsigned char *)mem1;
	chr2 = (unsigned char *)mem2;
	i = 0;
	while (i < size)
	{
		if (chr1[i] != chr2[i])
			return (chr1[i] - chr2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	ft_memcmp("mem1", "mem2", 5);
}*/