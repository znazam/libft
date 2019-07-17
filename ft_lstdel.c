/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <znazam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:29:16 by znazam            #+#    #+#             */
/*   Updated: 2019/07/17 11:47:16 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	putendl("hi");
	if(*alst)
		ft_lstdel(&(*alst)->next, del);
	putendl("hi2");
	del((*alst)->content, (*alst)->content_size);
	putendl("hi3");
	free(*alst);
	putendl("hi4");
	*alst = NULL;
}
