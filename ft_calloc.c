/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:36:31 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 12:35:03 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = malloc(num * size);
	i = 0;
	if (!mem)
		return (NULL);
	while (i < num * size)
		mem[i++] = 0;
	return ;
}
/*
int main(void)
{
	size_t	elements = 0;
	size_t	size = 0;

	printf("Number of Elements: ");
	scanf("%zd", &elements);
	printf("Size in Bytes: ");
	scanf(" %zd", &size);
	printf("---\n");
	printf("Test output: %d\n\n", calloc(elements, size));
	printf("Func output: %d\n\n", ft_calloc(elements, size));
}*/
