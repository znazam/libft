/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:28:56 by znazam            #+#    #+#             */
/*   Updated: 2019/05/22 16:03:50 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h>

int		atoi(const char *str);
int		ft_isalnum(int c);
int 	ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
size_t	ft_strlen(const char *str);
char	*ft_strncpy(char *dst, char *src, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
