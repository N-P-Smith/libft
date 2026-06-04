/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:23:07 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 19:49:18 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	while (*str)
	{
		if (*str == chr)
			return ((char *)str);
		str++;
	}
	if (*str == '\0')
		return ((char *)str);
	return (0);
}
