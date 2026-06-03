/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:08:09 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 15:08:13 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int chr, size_t size)
{
	unsigned char	*str_s;
	unsigned int	i;

	str_s = (unsigned char *)str;
	i = 0;
	while (i < size)
	{
		if (str_s[i] == chr)
			return ((void *)&str_s[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char	string[100];
	char	character[1];
	int	number;
	char	*test_str;
	char	*func_str;

	printf("Test string: ");
	scanf("%[^\n]s", string);
	printf("Character: ");
	scanf(" %c", character);
	printf("Bytes: ");
	scanf(" %d", &number);
	printf("---\n");
	test_str = memchr(string, *character, number);
	printf("Test output: %s\n\n", test_str);
	func_str = ft_memchr(string, *character, number);
	printf("Func output: %s\n\n", func_str);
}*/
