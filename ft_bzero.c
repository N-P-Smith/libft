/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:41:39 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 12:55:48 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t size)
{
	size_t	i;
	char	*host;

	i = 0;
	host = (char *)mem;
	while (i < size)
	{
		host[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	string[100];
	int	length = 0;
	char	*test;
	char	*func;
	
	test = string;
	func = string;
	printf("Test string: ");
	scanf("%[^\n]s", string);
	printf("Bytes: ");
	scanf("%d", &length);
	bzero(test, length);
	printf("Test output: %s\n", test);
	ft_bzero(func, length);
	printf("Func output: %s\n", func);
}*/
