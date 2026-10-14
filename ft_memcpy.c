/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:40:47 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/13 09:52:41 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*byte_dest;
	char	*byte_src;
	size_t	i;

	byte_dest = (char *) dest;
	byte_src = (char *) src;
	i = 0;
	while (i < n)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {

// 	//*** test1
//     // char	result1[100];
// 	// ft_memcpy(result1, "abc", 0);

// 	// printf("%s", result1);

// 	//*** test 2 */

// 	// int result2[4] = {0, 0, 0, 0};
// 	// int to_copy[4]= {1, 2, 3, 4};

// 	// memcpy(result2, to_copy, 0);

// 	// for(int i= 0; i < 4; i++)
// 	// 	printf("%d", result2[i]);

// 	//** test 3 */ overlapping memory area

// 	char p[] = "abcde";	
// 	memcpy((char*)(p + 1), (char*)p, 3);
// 	printf("%s", (char *)(p));
// }
