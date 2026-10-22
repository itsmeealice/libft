/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:26:50 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 21:33:44 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// static void del(void *content_to_delete)
// {
//     char *content = (char *)content_to_delete;
//    free(content);
// }
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;
    
    while(*lst)
    {        
        tmp = *lst;
        (*lst) = (*lst) -> next; 
        ft_lstdelone(tmp, del);
    }
    
    (*lst) = NULL;
}
// void ft_print(t_list **lst)
// {
//     if(*lst == NULL)
//     {
//         printf("IT WORKED");
//         return;
//     }
// }
// int main(void)
// {
//      t_list *lista = NULL;
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("1")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("2")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("3")));
//     ft_lstclear(&lista, del);
//     ft_print(&lista);

   
// }