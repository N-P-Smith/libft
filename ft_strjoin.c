/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:03:38 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 17:03:55 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*join;
	size_t	i1;
	size_t	i2;

	join = malloc(sizeof(str1) + sizeof(str2) + 1);
	i1 = 0;
	i2 = 0;
	if (!join)
		return (NULL);
	while (str1[i1])
	{
		join[i1] = str1[i1];
		i1++;
	}
	while (str2[i2])
	{
		join[i1] = str2[i2];
		i1++;
		i2++;
	}
	join[i1] = '\0';
	return (join);
}
/*
int main(void)
{
	char	string1[100];
	char	string2[100];

	printf("First string: ");
	scanf("%[^\n]s", string1);
	printf("Second string: ");
	scanf(" %[^\n]s", string2);
	printf("---\n");
	printf("Joined string: %s\n\n", ft_strjoin(string1, string2));
}*/
