/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:51:16 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/15 04:36:28 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	ft_bytecopy(char *byte_dest, char *byte_src, int n, int direction)
{
	int	i;

	if (direction == 1)
	{
		i = 0;
		while (i < n)
		{
			byte_dest[i] = byte_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			byte_dest[i] = byte_src[i];
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*byte_dest;
	char	*byte_src;

	if (!dest && !src)
		return (dest);
	byte_src = (char *)src;
	byte_dest = (char *)dest;
	if (byte_dest <= byte_src)
		ft_bytecopy(byte_dest, byte_src, n, 1);
	else
		ft_bytecopy(byte_dest, byte_src, n, -1);
	return (dest);
}

// int main(void)
// {
//     char str[] = "lorem ipsum dolor";

//     printf("Before: %s\n", str);

//     ft_memmove(str, str + 2, 8);

//     printf("After:  %s\n", str);

//     return (0);
// }