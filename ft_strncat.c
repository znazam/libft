/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:33:17 by znazam            #+#    #+#             */
/*   Updated: 2019/05/23 10:48:58 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int I;

	i = 0;
	I = 0;
	while(s1[i] != '\0')
	{
		i++;
	}
	while (s2[I] != '\0' && I < n) 
	{
		s1[i + I] = s2[I];
		I++;
	}
	s1[i + I] = '\0';
	return (s1);
}
