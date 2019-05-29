/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:58:55 by znazam            #+#    #+#             */
/*   Updated: 2019/05/29 08:47:31 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char)c;
	tmpdest = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmpdest[i] = tmpsrc[i];
		if (tmpsrc[i] == ch)
			return (tmpdest + i + 1);
		i++;
	}
	return (NULL);
}
