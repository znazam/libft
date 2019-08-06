/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:00:48 by znazam            #+#    #+#             */
/*   Updated: 2019/08/06 09:00:50 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	char *iter;
	char *c1;
	char *c2;

	c1 = (char *)s1;
	c2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	result = malloc(sizeof(char) + (ft_strlen(s1) + ft_strlen(s2) + 1));
	iter = result;
	if (!result)
		return (NULL);
	while (*c1)
		*(iter++) = *(c1++);
	while (*c2)
		*(iter++) = *(c2++);
	*iter = 0;
	return (result);
}
