/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:15:24 by znazam            #+#    #+#             */
/*   Updated: 2019/05/28 08:05:03 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	dest[i] = '\0';
	i--;
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	return (dest);
}
