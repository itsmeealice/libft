/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:57:52 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/19 14:28:28 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	s = ft_memset(p, '\0', n);
}
// int	main(void)
// {
// 	char	mystring[100];
// 	strcpy(mystring, "abcdef");
// 	ft_bzero(mystring, 0);
// 	for(int i = 0; i < 7; i++)
// 	{
// 		printf("%d ", (unsigned char)mystring[i]);
// 	}

// 	printf("\n");

// 	// strcpy(mystring, "abcdef");
// 	// bzero(mystring, 3);
// 	// printf("orginal: %s\n", mystring);
// }