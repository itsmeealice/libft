/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:28:30 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/16 18:47:33 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	little_len;

// 	i = 0;
// 	j = 0;
// 	little_len = ft_strlen(little);
// 	if (0 == little_len)
// 		return ((char *) big);
// 	while (i < (len - little_len))
// 	{
// 		if ((big[0] == little[0]) && (0 == ft_strncmp(big, little, little_len)))
// 			return ((char *)big);
// 		big++;
// 		i++;
// 	}
// 	return (NULL);
// }

// int main(void)
// {
//     char a[] = "myabcdABC";
//     char to_find[] = "abc";

//     printf("%s" , ft_strnstr(a, to_find, 5));
// }