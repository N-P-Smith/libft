/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:31:54 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/05 15:39:41 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	end;

	end = (int)ft_strlen(str);
	if (!((unsigned char) chr))
		return ((char *) &str[end]);
	while (end >= 0)
	{
		if (str[end] == (unsigned char) chr)
			return ((char *) &str[end]);
		end--;
	}
	return (NULL);
}
