#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *head;
    t_list *tmp;

    head = *alst;
    while(head)
    {
        tmp = head;
        free(head);
        head = tmp->next;
    }
    *alst = NULL;
}