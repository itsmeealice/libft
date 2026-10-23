/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:45:44 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/23 00:49:38 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char s1[100] = "qb";
//     char s2[100] = "";
//     printf("NORMAL: %d\n", strncmp(s1, s2, 1));
//     printf("42: %d\n", ft_strncmp(s1, s2, 1));
// }