/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:04:54 by nsmith            #+#    #+#             */
/*   Updated: 2026/06/03 16:05:17 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*out;

	out = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	len = 0;
	while (len < ft_strlen(str))
	{
		out[len] = (*f)(len, str[len]);
		len++;
	}
	out[len] = '\0';
	return (out);
}
/*
int	main(void)
{
	char	string[100];
	int	func;
    
    func = 0;
    printf("String:, ");
    scanf("%[^\n]s", string);
    //printf("U(pper) or L(ower): ");
    printf("1 (Upper) or 2 (Lower): ");
    //scanf(" %c", func);
    scanf(" %d", &func);
    printf("---\n");
    //if (func == ('u' || 'U'))
    if (func == 1)
        //printf("Output: %s\n\n", ft_toupper(string));
        printf("Output: %s\n\n", ft_strmapi(string, &ft_toupper));
    //if (func == ('l' || 'L'))
    if (func == 2)
        //printf("Output: %s\n\n", ft_tolower(string));
        printf("Output: %s\n\n", ft_strmapi(string, &ft_tolower));
    //if (func != ('u' || 'U') && func != ('l' || 'L'))
    if (func != 1 && func != 2)
        printf("Invalid function.");
}*/
