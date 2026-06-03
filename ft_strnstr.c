/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:14:17 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 17:15:18 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t length)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	if (!sub[0])
		return (*str);
	while (str[i1] != '\0' && i1 <= length)
	{
		i2 = 0;
		while (str[i1 + i2] && sub[i2] && str[i1 + i2] == sub[i2])
			i2++;
		if (!sub[i2])
			return (&str[i1]);
		i1++;
	}
	return (0);
}

int	main(void)
{
	char	string[100];
	char	substr[100];
	int	number = 0;

	printf("Main string: ");
	scanf("%[^\n]s", string);
	printf("Sub-string: ");
	scanf(" %[^\n]s", substr);
	printf("In range: ");
	scanf(" %d", &number);
	printf("---\n");
	printf("Test output: %s\n\n", strnstr(string, substr, number));
	printf("Func output: %s\n\n", ft_strnstr(string, substr, number));
}
