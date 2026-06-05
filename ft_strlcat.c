/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:14:32 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 20:35:24 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	int				i;

	dest_len = ft_strlen(destination);
	src_len = ft_strlen(source);
	i = 0;
	if (size == 0)
		return (src_len);
	if (dest_len > size)
		return (src_len + size);
	while (source[i] != '\0' && (dest_len + i) < size - 1)
	{
		destination[dest_len + i] = source[i];
		i++;
	}
	destination[dest_len + i] = '\0';
	return (dest_len + src_len);
}
