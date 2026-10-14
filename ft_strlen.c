/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:14:09 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/12 12:27:11 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *s)
{
	char	*p;
	size_t	no_of_characters;

	p = (char *)s;
	no_of_characters = 0;
	while (*p != '\0')
	{
		p++;
		no_of_characters++;
	}
	return (no_of_characters);
}

// int	main(void)
// {
// 	int	is_strlen_redone;
// 	int is_strlen_original;

// 	is_strlen_redone = ft_strlen("al");
// 	is_strlen_original = strlen("");
// 	printf("%d : %d", is_strlen_redone, is_strlen_original);
// }
