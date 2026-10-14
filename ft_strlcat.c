/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:19:47 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/13 10:44:23 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:15:50 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/13 10:18:28 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	size -= 1;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i < size && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char src[] = "anabc";
// 	char dest[100] = "mere";
// 	printf("original implementation\n");
// 	printf("Before source: %s  destination: %s \n", src, dest);
// 	ft_strlcat(dest, src, 7);
// 	printf("Before source: %s  destination: %s \n", src, dest);
// }