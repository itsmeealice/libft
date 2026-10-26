/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:21:07 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:34:51 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	new_s = NULL;
	new_s = malloc(s_len + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// int main(void)
// {
//     char a[] = "";
//     char *p = ft_strdup(a);
//     printf("%s", p);
// }