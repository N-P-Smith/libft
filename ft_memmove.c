/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:04:33 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 15:04:39 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t		i;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (temp_dest < temp_src || temp_dest >= (temp_src + size))
	{       
		while (i < size)
		{
			*temp_dest++ = *temp_src++;
			i++;
		}
	}
	else
	{
		temp_dest += size;
		temp_src += size;
		while (size--)
			*(temp_dest--) = *(temp_src--);
	}
	return (dest);
}
