/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:28:56 by znazam            #+#    #+#             */
/*   Updated: 2019/05/30 15:48:36 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>

int		atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_*memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void	*dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t n)
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memalloc(size_t n);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, char *src, size_t len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char	*ft_strncpy(char *dst, char *src, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
