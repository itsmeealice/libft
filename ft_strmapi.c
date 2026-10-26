/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:39:57 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:35:31 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	touppercase(unsigned int c, char a)
// {
//     if(c % 2 == 0)
//     {
//         a = ft_toupper(a);
//     }
// 	return (a);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		s_len;
	int		i;
	char	*new_s;

	s_len = (int)ft_strlen(s);
	new_s = malloc(s_len + 1);
	i = 0;
	if (new_s == NULL)
		return (NULL);
	while (i < s_len)
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
// int main(void)
// {
//     char s[100] = "onetwothree";
// 	char *new_s = ft_strmapi(s, touppercase);
// 	printf("%s", new_s);
// }