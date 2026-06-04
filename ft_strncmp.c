/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:46:39 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 15:49:00 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (0);
	while ((str1[i] != '\0' || str2[i] != '\0') && i < size - 1)
	{
		if (str1[i] == str2[i])
			i++;
		else
			break ;
	}
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	char	a[] = "aaaaaaa";
	//char	b[] = "abcdefg";
	//char	c[] = "aacdefg";
	char	d[] = "aaadefg";
	//char	e[] = "aaaaefg";
	//char	f[] = "";
	int	len = 0;
	
	printf("Func: %d\n", ft_strncmp(a, a, len));
	printf("Func: %d\n", ft_strncmp(a, d, len));
	printf("Func: %d\n", ft_strncmp(f, a, len));
	printf("\n");
	printf("Test: %d\n", strncmp(a, a, len));
	printf("Test: %d\n", strncmp(a, d, len));
	printf("Test: %d\n", strncmp(d, a, len));
}*/