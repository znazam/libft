/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <znazam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:29:32 by znazam            #+#    #+#             */
/*   Updated: 2019/07/15 10:31:51 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst)
	{
		new->next = *alst;
		*alst = new;
		(*alst)->previous = (*alst)->next->previous;
		(*alst)->next->previous = (*alst);
	}
	else
	{
		*alst = new;
	}
}
