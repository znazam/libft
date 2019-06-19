/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:15:20 by znazam            #+#    #+#             */
/*   Updated: 2019/06/19 09:34:25 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[n] != '\0')
	{
		s1[i + n] = s2[n];
		n++;
	}
	s1[i + n] = '\0';
	return (s1);
}
