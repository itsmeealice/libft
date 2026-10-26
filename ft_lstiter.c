/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:14:04 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:32:35 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void toUppercase(void * ptr)
// {
//     char *str = (char *)ptr;
//     int diff = 'a' -'A';
//     int i = 0;
//     while(str[i])
//     {
//         str[i] -= diff;
//         i++;
//     }
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst)
	{
		(*f)((*lst).content);
		(lst) = lst->next;
	}
}
// void print_list (t_list *lst)
// {
//     while(lst -> next)
//     {
//         printf("%s", (char *) lst->content);
//         lst = lst->next;
//     }
//     printf("%s", (char *) lst -> content);
// }

// int main(void)
// {
//     t_list *lista = NULL;
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("a")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("b")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("c")));
//     ft_lstiter(lista, toUppercase);
//     print_list(lista);
// }