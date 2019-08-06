/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:27:44 by znazam            #+#    #+#             */
/*   Updated: 2019/08/06 08:27:45 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *start, size_t length)
{
	size_t		i;
	char		*dest;

	i = 0;
	dest = malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (NULL);
	while (i < length && start[i])
	{
		dest[i] = start[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
