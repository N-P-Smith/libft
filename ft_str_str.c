/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:43:31 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 15:45:11 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	text[] = "You'll never find me in all this string!";
	//char	text[] = "";
	char	a[] = "find";
	char	b[] = "fund";
	char	c[] = "n a";
	char	d[] = "";
	
	printf("Func: %s\n", ft_strstr(text, a));
	printf("Func: %s\n", ft_strstr(text, b));
	printf("Func: %s\n", ft_strstr(text, c));
	printf("Func: %s\n", ft_strstr(text, d));
	printf("\n");
	printf("Test: %s\n", strstr(text, a));
	printf("Test: %s\n", strstr(text, b));
	printf("Test: %s\n", strstr(text, c));
	printf("Test: %s\n", strstr(text, d));
}*/