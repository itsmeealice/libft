/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:56:03 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 11:14:23 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void * content)
{
    t_list *new_node = malloc(sizeof(t_list));
    new_node -> content = content;
    new_node -> next = NULL;

    return(new_node);
}
// int main(void)
// {
//     t_list *node1 = ft_lstnew("alice");

//     printf("%s", (char *)node1 -> content);
// }