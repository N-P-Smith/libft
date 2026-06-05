/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:46:39 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/05 16:15:27 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	unsigned char	*str1_u;
	unsigned char	*str2_u;	
	size_t			i;

	str1_u = (unsigned char *) str1;
	str2_u = (unsigned char *) str2;
	i = 0;
	if (size == 0)
		return (0);
	while ((str1_u[i] != '\0' || str2_u[i] != '\0') && i < size - 1)
	{
		if (str1_u[i] == str2_u[i])
			i++;
		else
			break ;
	}
	return (str1_u[i] - str2_u[i]);
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