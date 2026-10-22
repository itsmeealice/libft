/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:15:16 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 11:46:49 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return;
    new -> next = *lst;
    *lst = new;
}
// int main(void)
// {
//     t_list *lista = NULL;
//     ft_lstadd_front(&lista, ft_lstnew("hello"));
//     ft_lstadd_front(&lista, ft_lstnew("world"));
//     printf("%s", (char *) lista->next->content);
// }