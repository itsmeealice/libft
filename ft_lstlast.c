/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:48:04 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:32:41 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content_to_delete)
{
	char	*content;

	content = (char *)content_to_delete;
	free (content);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (!lst)
	{
		return (NULL);
	}
	node = lst;
	while (node->next)
	{
		node = node -> next;
	}
	return (node);
}
// int main(void)
// {
//     t_list *lista = NULL;
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("1")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("2")));
//     ft_lstadd_back(&lista, ft_lstnew(ft_strdup("3")));
//     t_list *last_node = ft_lstlast(lista);
//     printf("%s", (char *)last_node ->content);
// }