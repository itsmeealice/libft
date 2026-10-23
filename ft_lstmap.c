/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:51:32 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 23:34:49 by apazitor         ###   ########.fr       */
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
// void *toUppercase(void * ptr)
// {
//     char *src = (char *)ptr;
//     char *dest = ft_strdup(src);
//     if(dest == NULL)
//         return (NULL);
//     int i = 0;
//     while(dest[i])
//     {
//         if(dest[i] >='a' && dest[i] <= 'z')
//             dest[i] = dest[i] - ('a' - 'A');
//         i++;
//     }
//     return(dest);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
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
//      t_list *lista = NULL;
//      t_list *new_list;
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("a")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("b")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("c")));

//     new_list = ft_lstmap(lista, toUppercase, del);

//     print_list(new_list);
// }
