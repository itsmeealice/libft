/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:48:04 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 17:03:07 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int nr = 0;
    if(!lst)
      return (0);
     while(lst -> next)
     {
        nr++;
        lst = lst -> next; 
     }
     nr++;
     return (nr);
}
// int main(void)
// {
//     t_list *lista = NULL;
//     ft_lstadd_front(&lista, ft_lstnew("hello"));
//     ft_lstadd_front(&lista, ft_lstnew("world"));
//     printf("%d", ft_lstsize(lista));
// }