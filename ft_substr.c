/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:30:07 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/19 15:57:57 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


void	check_allocation(char  *s)
{
	int	i;

	if(s == NULL)
	{
		printf("CHECK FAILED. STRING NULL");
		return;
	}

	i = 0;
	printf("=====checking allocation ======\n");
	while (i < 200)
	{
		printf("%d ", s[i]);
		i++;
	}
	printf("======= checked allocation =========\n");
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	unsigned int 	k;
	unsigned int	i;

	k = 0;
	if (s == NULL || len ==0 )
	{
		char *substr = malloc(1);
		if(substr == NULL)
			return NULL;
		substr[0] = '\0';
		return (substr);
	}
	size_t s_length = ft_strlen(s);	
	if (start > s_length)
	{
		char *substr = malloc(1);
		if(substr == NULL)
			return NULL;
		substr[0] = '\0';
		return (substr);
	}
	

	while(k < len && s[start + k] != '\0')
		k++;

	i = start;
	j = 0;
	char *substr = malloc(k + 1);
	if (substr == NULL)
	{
		//printf("%s", "allocation failed");
		return NULL;
	}
	while (i < start + k)
	{
		substr[j] = s[i];
		i++;
		j++;

	}
	substr[j] ='\0';
	return substr;
}
// int	main(void)
// {
// 	char *s = "tripouille";
// 	ft_substr(s, 0, 42000);
	
// }
