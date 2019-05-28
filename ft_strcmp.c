/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:45:45 by znazam            #+#    #+#             */
/*   Updated: 2019/05/28 11:30:07 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (((unsigned char)s1[i] != '\0') &&
	   	((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
