/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:28:30 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/18 13:45:06 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (0 == little_len)
		return ((char *) big);
	if (len == 0)
		return (NULL);
	if (little_len > ft_strlen(big))
		return (NULL);
	while (big[0] && (i < (len - little_len + 1)))
	{
		if ((big[0] == little[0]) && (0 == ft_strncmp(big, little, little_len)))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *s1 = ft_strnstr("teste", "teste", 1);
//     printf("Resulted: %s\n", s1);
// }