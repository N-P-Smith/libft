/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:26:07 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/04 19:50:45 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count(char const *str, char chr)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == chr)
			str++;
		if (*str)
			count++;
		while (*str && *str != chr)
			str++;
	}
	return (count);
}

char	**ft_split(char const *str, char chr)
{
	char	**out_str;
	size_t	len;
	int		i;

	out_str = (char **)malloc((str_count(str, chr) + 1) * sizeof(char *));
	i = 0;
	if (!str || !out_str)
		return (NULL);
	while (*str)
	{
		while (*str && *str == chr)
			str++;
		if (*str)
		{
			if (!ft_strchr(str, chr))
				len = ft_strlen(str);
			else
				len = ft_strchr(str, chr) - str;
			out_str[i++] = ft_substr(str, 0, len);
			str += len;
		}
	}
	out_str[i] = NULL;
	return (out_str);
}

int	main(void)
{
	char	string[100];
	char	character;
	char	**output;
	int	i;

	character = '\0';
	i = 0;
	printf("String: ");
	scanf("%[^\n]s", string);
	printf("Delimiter: ");
	scanf(" %c", &character);
	output = ft_split(string, character);
	printf("---\n");
	while (output[i])
		printf("%s\n", output[i++]);
}
