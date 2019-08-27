/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <znazam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 07:48:34 by znazam            #+#    #+#             */
/*   Updated: 2019/08/19 16:17:46 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *a, void *b, size_t s)
{
	char *tmp;

	tmp = ft_memalloc(s);
	ft_memmove(tmp, a, s);
	ft_memmove(a, b, s);
	ft_memmove(b, tmp, s);
	free(tmp);
}
