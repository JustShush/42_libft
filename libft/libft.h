/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:57:51 by dimarque          #+#    #+#             */
/*   Updated: 2022/11/15 19:44:49 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# include <limits.h>
# include <stdio.h>
# include <ctype.h>

int		ft_atoi(const char *str); //										28/10
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nitems, size_t size); //							10/11
int		ft_isalnum(int arg);
int		ft_isalpha(int c);
int		ft_isascii(int c); // <--------- //									28/10
int		ft_isdigit(int c);
int		ft_isprint(int arg);
void	*ft_memchr(const void *str, int c, size_t n); //					4/11
int		ft_memcmp(const void *s1, const void *s2, size_t n); //				10/11
void	*ft_memcpy(void *dest, const void *src, size_t n); //				28/10
void	*ft_memmove(void *dest, const void *src, size_t n); //				28/10
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c); //								31/10
char	*ft_strdup(const char *str); //										10/11
size_t	ft_strlcat(char *dst, const char *src, size_t size); //				28/10
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n); //			31/10
char	*ft_strnstr(const char *big, const char *little, size_t len); //	4/11
char	*ft_strrchr(const char *s, int c); // 								31/10
int		ft_tolower(int ch);
int		ft_toupper(int ch);

// parte 2
char	*ft_substr(char const *s, unsigned int start, size_t len); //		10/11
char	*ft_strjoin(char const *s1, char const *s2); //						11/11
char	*ft_strtrim(char const *s1, char const *set); //					11/11
void	ft_putchar_fd(char c, int fd); //									11/11
void	ft_putstr_fd(char *s, int fd); //									11/11
void	ft_putnbr_fd(int n, int fd); //										11/11
void	ft_putendl_fd(char *s, int fd); //									11/11
char	**ft_split(char const *str, char c); 

#endif