/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:14:32 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 15:14:37 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	int	i;

	dest_len = ft_strlen(destination);
	src_len = ft_strlen(source);
	i = 0;
	while (*(destination++) != '\0')
		dest_len++;
	while (*(source++) != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	if (dest_len >= size)
		return (src_len + size);
	while (source[i] != '\0' && (dest_len + i) < size)
	{
		destination[dest_len + i] = source[i];
		i++;
	}
	destination[dest_len + i] = '\0';
	return (dest_len + src_len);
}
