/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:57:49 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 12:58:01 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_len(int num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (2);
	if (num < 0)
	{
		num = num * -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	size_t	len;
	char	*out;

	len = set_len(num);
	out = malloc(set_len(num) + 1);
	if (num == 0)
		out[0] = '0';
	if (num < 0)
	{
		num = num * -1;
		out[0] = '-';
	}
	out[len] = '\0';
	while (num > 0 && len > 0)
	{
		len--;
		out[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (out);
}
/*
int main(void)
{
	int	number;

	number = 0;
	printf("Number: ");
	scanf("%d", &number);
	printf("---\n");
	printf("Output: %s\n\n", ft_itoa(number));
}*/
