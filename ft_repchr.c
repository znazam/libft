/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 12:43:20 by znazam            #+#    #+#             */
/*   Updated: 2019/06/21 12:54:54 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_repchr(char **str, char find, char replace)
{
	char *ptr;

	if ((ptr = (ft_strchr(*str, find))) == NULL)
		return (NULL);
	*ptr = replace;
	return (ptr);
}
