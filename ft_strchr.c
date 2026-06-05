/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:23:07 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/05 15:27:55 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	while ((*str != '\0') && (*str != chr))
		str++;
	if (*str == chr)
		return ((char *)str);
	return ((char *) NULL);
}
/*
int	main(void)
{
	ft_strchr("test", 't');
}*/