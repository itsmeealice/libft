/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:28:12 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:35:05 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		len_prefix;
	int		len_sufix;
	int		new_string_len;

	len_prefix = ft_strlen(s1);
	len_sufix = ft_strlen(s2);
	new_string_len = len_prefix + len_sufix + 1;
	new_string = malloc(new_string_len);
	if (new_string == NULL)
		return (NULL);
	ft_memcpy(new_string, s1, len_prefix);
	ft_memcpy(new_string + len_prefix, s2, len_sufix + 1);
	return (new_string);
}
// int main(void)
// {
// 	char *s = ft_strjoin("lorem ipsum", "dolor sit amet");

// 	printf("%s", s);

// }