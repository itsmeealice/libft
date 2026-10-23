/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:11:27 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/23 00:01:19 by apazitor         ###   ########.fr       */
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

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst ->content);
	free(lst);
}
// static void ft_print_list(t_list *lista)
// {
//     t_list *node = lista;
//     while(node)
//     {
//         printf("%s", (char*)node->content);
//         node = node -> next;
//     }
// }
// int main(void)
// {
//      t_list *lista = NULL;
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("1")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("2")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("3")));
//     t_list *tmp;
//     tmp = lista->next;
//     lista->next = tmp->next;
//     ft_lstdelone(tmp, del);
//     ft_print_list(lista);
// }