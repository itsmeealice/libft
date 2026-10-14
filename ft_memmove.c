/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:51:16 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/13 10:14:59 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*byte_dest;
	char	*byte_src;
	size_t	i;

	byte_src = (char *)src;
	byte_dest = (char *)dest;
	i = n - 1;
	while (i > 0)
	{
		byte_dest[i] = byte_src[i];
		i--;
	}
	byte_dest[i] = byte_src[i];
	return (dest);
}

// int main(void)
// {
// 	char src[] = "abcdef";
// 	ft_memmove((src + 1), src, 3);

// 	printf("%s", src);
// }