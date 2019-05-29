/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:31:38 by znazam            #+#    #+#             */
/*   Updated: 2019/05/29 11:18:03 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;
	size_t			i;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	i = len;
	if (tsrc == NULL && tdst == NULL)
		return (NULL);
	if (tsrc < tdst)
		while (i--)
		{
			tdst[i] = tsrc[i];
		}
	else
		dst = ft_memcpy(tdst, tsrc, len);
	return (dst);
}
