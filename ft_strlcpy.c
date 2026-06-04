/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:28:42 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 15:23:23 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	*dest = malloc(100 * sizeof(char));
	char	*src = malloc(100 * sizeof(char));
	int		size = 0;
	char	test;
	char	func;

	test = *dest;
	func = *dest;
	printf("Source string: ");
	scanf("%[^\n]s", src);
	printf("Size: ");
	scanf("%d", &size);
	printf("---\n");
	strlcpy(&test, src, size);
	printf("Test destination: %s\n\n", &test);
	ft_strlcpy(&func, src, size);
	printf("Func destination: %s\n\n", &func);
}*/