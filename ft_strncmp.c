/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:03:03 by znazam            #+#    #+#             */
/*   Updated: 2019/05/28 11:50:27 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1,const char *s2, size_t n)
{
	int i;

	i = 0;
	while (((unsigned char)s1[i] != '\0') &&
	   	((unsigned char)s1[i] == (unsigned char)s2[i]) && (size_t)i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
