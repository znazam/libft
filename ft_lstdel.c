/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <znazam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:29:16 by znazam            #+#    #+#             */
/*   Updated: 2019/07/17 11:52:38 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	ft_putendl("hi");
	if(!*alst)
		return
	ft_lstdel(&(*alst)->next, del);
	ft_putendl("hi2");
	printf("%p %p, %zu\n", (void*)del, (*alst)->content, (*alst)->content_size);
	del((*alst)->content, (*alst)->content_size);
	ft_putendl("hi3");
	free(*alst);
	ft_putendl("hi4");
	*alst = NULL;
}
