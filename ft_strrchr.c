/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:31:54 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 18:39:24 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int chr)
{
	int	end;

	end = ft_strlen(str);
	while (end >= 0)
	{
		if (str[end] == chr)
			return ((char *)str);
		end--;
	}
	return ((char *)str);
}
