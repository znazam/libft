/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:11:03 by znazam            #+#    #+#             */
/*   Updated: 2019/05/31 13:13:21 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	if (!(new = malloc(size + 1)))
		return (NULL);
	ft_memset(new, 0, size + 1);
	new[size + 1] = '\0';
	return (new);
}
