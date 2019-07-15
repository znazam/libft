/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <znazam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:29:16 by znazam            #+#    #+#             */
/*   Updated: 2019/07/15 08:29:18 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list	*head;
	t_list	*tmp;

	head = *alst;
	while (head)
	{
		tmp = head;
        free(head);
        head = tmp->next;
	}
	*alst = NULL;
}
