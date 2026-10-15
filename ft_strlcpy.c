/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:15:50 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/15 03:30:08 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

// int	main(void)
// {
// 	char src[] = "ABCDE";
// 	char dest[] = "thisismydestinationstring";
// 	printf("original implementation\n");
// 	printf("Before source: %s  destination: %s \n", src, dest);
// 	ft_strlcpy(dest, src, 4);
// 	printf("Before source: %s  destination: %s \n", src, dest);
// 	printf("my implementation\n");
// 	printf("Before source: %s  destination: %s \n", src, dest);
// 	ft_strlcpy(dest, src, 4);
// 	printf("Before source: %s  destination: %s \n", src, dest);
// }
