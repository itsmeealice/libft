/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:30:07 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/15 15:02:46 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr = malloc(len + 1);
	size_t s_length = ft_strlen(s);	
	if (substr == NULL)
		return NULL;
	if (start > s_length)
		return "";
	if (start + len > s_length)
	{
		return (s + start);
	}
	unsigned int	i;
	unsigned int k = 0;

	for (i = start; i < start + len; i++)
	{
		substr[k++] = s[i];
	}
	substr[k] ='\0';
	return substr;
}
int	main(void)
{
	char text[] = "Anaaremere";
	printf ("%s", ft_substr(text, 3, 4));
}