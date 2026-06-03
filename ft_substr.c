/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:29:42 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 16:30:02 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	sub = malloc(len + 1);
	sub[len] = '\0';
	i = 0;
	if (!sub)
		return (NULL);
	while (len > 0)
	{
		sub[i] = str[start];
		i++;
		start++;
		len--;
	}
	return (sub);
}
