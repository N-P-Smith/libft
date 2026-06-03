/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:58:47 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 15:59:16 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	test_a(unsigned int pos, char *chr)
{
	printf("Index: %d, Character: %c\n", pos, *chr); 
}

void	test_b(unsigned int pos, char *chr)
{
	if (*chr >= 'A' && *chr <= 'Z')
		*chr = *chr + 32;
	printf("Index: %d, Character: %c\n", pos, *chr);  
}

void	test_c(unsigned int pos, char *chr)
{
	if (*chr >= 'a' && *chr <= 'z')
		*chr = *chr - 32;
	printf("Index: %d, Character: %c\n", pos, *chr);
}

void	test_d(unsigned int pos, char *chr)  //Doesn't work as intended.
{
	chr++;
	printf("Index: %d, Character: %c\n", pos, *chr); 
}*/

void	ft_striteri(char *str, void (*func)(unsigned int, char *))
{
	int pos;

	pos = 0;
	if (!str || !func)
		return ;
	while (str[pos])
	{
		(*func)(pos, &str[pos]);
		pos++;
	}
}
/*
int	main(void)
{
	char	string[100];
	char	test;

	printf("String: ");
	scanf("%[^\n]s", string);
	printf("Test (a, b, c, or d:) ");
	scanf(" %c", &test);
	printf("---\n");
	if (test == 'a')
	{
		printf("Test A - putchar\n");
		ft_striteri(string, &test_a);
	}
	if (test == 'b')
	{
		printf("Test B - tolower\n");
		ft_striteri(string, &test_b);
	}
	if (test == 'c')
	{
		printf("Test C - toupper\n");
		ft_striteri(string, &test_c);
	}
	if (test == 'd')
	{
		printf("Test D - nextchar\n");
		ft_striteri(string, &test_d);
	}
		if (test != 'a' && test != 'b' && test != 'c' && test != 'd')
		printf("Invalid function.");
}*/
