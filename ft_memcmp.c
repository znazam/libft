/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:22:37 by znazam            #+#    #+#             */
/*   Updated: 2019/06/17 15:09:51 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;
	int				diff;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	diff = 0;
	while (diff == 0 && i < n)
	{
		diff = t1[i] - t2[i];
		i++;
	}
	return (diff);
}
