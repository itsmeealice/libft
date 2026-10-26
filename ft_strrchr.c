/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:39:00 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:37:05 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	searched_character;
	char	*found_string;

	i = 0;
	searched_character = (char)c;
	found_string = NULL;
	while (s[i] != '\0')
	{
		if ((s[i] == searched_character))
			found_string = ((char *)&s[i]);
		i++;
	}
	if (searched_character == '\0')
		return ((char *)&s[i]);
	return (found_string);
}

// int main(void)
// {
//     int searched_char = 65;
//     char mystring[] = "mmaaabc";
//     char *ptr = ft_strrchr(mystring, searched_char);
//     printf("%s", ptr);
//     return 0;
// }