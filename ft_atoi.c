/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:58:49 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/05 18:09:37 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	out;
	int	i;

	sign = 1;
	out = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || (str[i] == '+' && str[i + 1] != '-'))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			out = out * 10 + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	return ((int)(out * sign));
}
/*
int	main(void)
{
	printf("%d\n\n", atoi("+-54"));
	printf("%d", ft_atoi("+-54"));
}*/
