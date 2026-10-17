/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:19:47 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/17 12:49:20 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

static	size_t	ft_safe_strlen(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (str[i] != 0 && i < size)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_safe_strlen(dest, size);
	if (dest[dst_len] != '\0')
		return (size + ft_strlen(src));
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i + 1 < size && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	if (size <= dst_len)
		return (size + src_len);
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char *str = "123";
// 	char buff1[0xF00] = "";
// 	size_t max = 0;
// 	size_t r1 = ft_strlcat(buff1, str, max);
// 	printf("%d\n", (int)r1);
// 	printf("%s ", buff1);
// }