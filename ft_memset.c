/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:31:41 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:33:54 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	char	mystring[100];
// 	strcpy(mystring, "abcdef");
// 	ft_memset(mystring, 'X', 6);
// 	printf("impl: %s\n", mystring);

// 	strcpy(mystring, "abcdef");
// 	ft_memset(mystring, 'X', 6);
// 	printf("original: %s\n", mystring);
// }
