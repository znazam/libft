/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:57:44 by znazam            #+#    #+#             */
/*   Updated: 2019/05/29 09:31:06 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char ch;
	unsigned char *src;
	size_t i;

	ch = (unsigned char)c;
	src = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
			return (src + i);
		i++;
	}
	return (NULL);
}
