/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:15:50 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:35:15 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char src[] = "ABCDE";
// 	char dest[] = "thisismydestinationstring";
// 	printf("original implementation\n");
// 	printf("Before source: %s  destination: %s \n", src, dest);
// 	strlcpy(dest, src, 0);
// 	printf("Before source: %s  destination: %s \n", src, dest);
// }
