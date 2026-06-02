/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmith <nsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:52:29 by nsmith            #+#    #+#             */
/*   Updated: 2026/05/29 18:03:21 by nsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <bsd/string.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *num);
void	ft_bzero(void *mem, size_t size);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(int chr);
int		ft_isalpha(int chr);
int		ft_isascii(int chr);
int		ft_isdigit(int num);
int		ft_isprint(int chr);
char	*ft_itoa(int num);
void	ft_lstadd_back(t_list **list, t_list *new);
void	ft_lstadd_front(t_list **list, t_list *new);
void	ft_lstclear(t_list **list, void (*del)(void *));
void	ft_lstdelone(t_list *list, void (*del)(void *));
void	ft_lstiter(t_list *list, void (*func)(void *));
t_list	*ft_lstlast(t_list *list);
t_list	*ft_lstmap(t_list *list, void *(*func)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *list);
void	*ft_memchr(const void *str, int chr, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *mem, int chr, size_t size);
void	ft_putchar_fd(char chr, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int num, int fd);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(char const *str, char chr);
char	*ft_strchr(const char *str, int chr);
char	*ft_strdup(const char *str);
void	ft_striteri(char *str, void (*func)(unsigned int, char *));
char	*ft_strjoin(char const *str1, char const *str2);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_strnstr(const char *str, const char *sub, size_t length);
char	*ft_strrchr(const char *str, int chr);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_substr(char const *str, unsigned int start, size_t len);
int		ft_tolower(int chr);
int		ft_toupper(int chr);

#endif
