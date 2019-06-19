/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:47:22 by znazam            #+#    #+#             */
/*   Updated: 2019/06/17 15:41:57 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *i;

	if (n == 0)
		return (b);
	i = (unsigned char *)b;
	while (n--)
	{
		*i = (unsigned char)c;
		if (n)
			i++;
	}
	return (b);
}
