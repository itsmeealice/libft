/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:48:04 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 12:00:02 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *node = lst;
     while(!(node->next))
     {
        node = node -> next; 
     }
     return (node);
}
// int main(void)
// {
//     t_list *lista = NULL;
//     ft_lstadd_front(&lista, ft_lstnew("hello"));
//     ft_lstadd_front(&lista, ft_lstnew("world"));
//     ft_lstadd_front(&lista, ft_lstnew("user"));
//     t_list *last_node = ft_lstlast(lista);
//     printf("%s", (char *)last_node -> content);
// }