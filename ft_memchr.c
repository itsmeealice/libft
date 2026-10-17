/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:00:33 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/17 13:16:01 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_string;
	unsigned char	searched_character;
	size_t			i;

	s_string = (unsigned char *) s;
	searched_character = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (s_string[i] == searched_character)
			return (s_string + i);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char * string = (char *) ft_memchr("alice", 0, 6);
// 	printf("%s", string);
// }