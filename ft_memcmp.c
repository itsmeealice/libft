/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:40:32 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/17 13:32:58 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_s1;
	unsigned char	*s_s2;
	size_t			i;

	i = 0;
	s_s1 = (unsigned char *)s1;
	s_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (s_s1[i] != s_s2[i])
			return (s_s1[i] - s_s2[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	// **test 1
//     // char s1[100] = "some";
//     // char s2[100] = "something";
//     // int result = ft_memcmp(s1, s2, sizeof(s1));
//     // printf("%d", result);
// 	// ** test2 
//     // int a[] = {1, 5, 3};
//     // int b[] = {1, 2, 3, 4};
//     // int result = ft_memcmp(a, b, 12);
//     // printf("%d", result);
// 	// ** test 3
// 	char s1[100] = "abc";
// 	char s2[100] = "abd";
// 	size_t size = 4;

// 	printf("%d", ft_memcmp(s1, s2, size));
// }