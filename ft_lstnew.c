/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <znazam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 09:28:16 by znazam            #+#    #+#             */
/*   Updated: 2019/07/15 09:10:48 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list      *ft_lstnew(void const *content, size_t content_size)
{
   t_list *head;

    if (!(head->content = ft_memalloc(content_size)))
        return (NULL); 
    ft_memcpy(head->content, content, content_size);
    head->content_size = content_size;
    if(content == NULL)
    {
        head->content = NULL;
        head->content_size = 0;
    }
    head->next = NULL;
    head->previous = NULL;
    return(head);

}

/* void        showList(t_list *list)
{
    while(list)
    {
        puts(list->content);
        ft_putchar(' ');
        list = list->next;
    }
}

int     main(void)
{

    t_list *myList;
    size_t G;

    myList = ft_lstnew("ddgfdfd", 8);
    
    showList(myList);

    return (0);
}*/