/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:12:05 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/13 11:38:14 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	searched_character;

	i = 0;
	searched_character = (char)c;
	while (s[i] != '\0')
	{
		if ((s[i] == searched_character))
			return ((char *)&s[i]);
		i++;
	}
	if (searched_character == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int main(void)
// {
//     int searched_char = 48;
//     char mystring[] = "mmaAbc";
//     char *ptr = ft_strchr(mystring, searched_char);
//     printf("%s", ptr);
//     return 0;
// }