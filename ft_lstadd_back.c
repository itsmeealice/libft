/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:00:34 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 12:09:45 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return;
    while ((*lst) -> next)
    {
       (*lst) = (*lst) -> next;
    }
    
    (*lst) -> next = new;
}
// int main(void)
// {
//     t_list *lista = NULL;
//     ft_lstadd_front(&lista, ft_lstnew("hello"));
//     ft_lstadd_front(&lista, ft_lstnew("world"));
//     ft_lstadd_back(&lista, ft_lstnew("42school"));
//     printf("%s", (char *) lista->next->content);
// }