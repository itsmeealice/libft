/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:21:07 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/15 00:37:30 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	i;

	new_s = NULL;
	new_s = malloc(sizeof(s));
	i = 0;
	while (i < sizeof(s))
	{
		new_s[i] = s[i];
		i++;
	}
	return (new_s);
}

// void main(void)
// {
//     char a[] = "mystring";
//     char *p = strdup(a);
//     printf("%s", p);
// }