/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:40:37 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 16:41:03 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char chr, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == chr)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(str);
	while (inset(str[start], set) == 1 && str[start] != '\0')
		start++;
	while (inset(str[end - 1], set) == 1)
		end--;
	return (ft_substr(str, start, (end - start)));
}
/*
int main(void)
{
	char	string[100];
	char	remove[100];

	printf("String: ");
	scanf("%[^\n]s", string);
	printf("To trim: ");
	scanf(" %[^\n]s", remove);
	printf("---\n");
	printf("Output: %s\n\n", ft_strtrim(string, remove));
}*/
