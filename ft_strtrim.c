/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:55:09 by znazam            #+#    #+#             */
/*   Updated: 2019/06/11 10:48:24 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*dst;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)(s)) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (s[i] == '\0')
			return (ft_strnew(0));
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		if (!(dst = (char*)malloc(sizeof(char) * (j - i + 2))))
			return (NULL);
		k = 0;
		while (i <= j)
		{
			dst[k++] = s[i];
			i++;
		}
		dst[k] = '\0';
		return (dst);
	}
	return (NULL);
}
