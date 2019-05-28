/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:41:37 by znazam            #+#    #+#             */
/*   Updated: 2019/05/28 15:07:28 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *x;
	char *y;

	if (n == 0 || dst == src)
		return (dst);
	x = (char *)dst;
	y = (char *)src;
	while (--n)
		*x++ = *y++;
	*x = *y;
	return (dst);
}
