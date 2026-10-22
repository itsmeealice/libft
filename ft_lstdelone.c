/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:11:27 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 14:51:41 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *del(t_list *lst, t_list *node)
{
    t_list *aux_node = lst;

    while(!aux_node && aux_node -> next != node)
    {
        aux_node = aux_node -> next;
    }
    if(aux_node -> next == node)
    {
        aux_node -> next = aux_node->next->next;
        free(node->content);
    }
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst);
}
int main(void)
{
    t_list *lista = NULL;
    t_list *node = lista;
    ft_lstadd_front(&lista, ft_lstnew("hello"));
    ft_lstadd_front(&lista, ft_lstnew("world"));
    ft_lstadd_back(&lista, ft_lstnew("42school"));
    while(node)
    {
        if(ft_strncmp(node -> content, "world", 5))
        {
            ft_lstdelone(lista, (*del));
        }
    }
    
   
}