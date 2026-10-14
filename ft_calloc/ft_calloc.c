/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 22:55:43 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/15 00:37:59 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	char	*ch_ptr;
	size_t	total_memory;
	int		i;

	if (size == 0 || (nitems > SIZE_MAX / size))
		return (NULL);
	total_memory = nitems * size;
	ptr = malloc(total_memory);
	if (ptr == NULL)
		return (NULL);
	ch_ptr = (char *)ptr;
	i = 0;
	while (i < total_memory)
	{
		ch_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
// int main()
// {
// 	int	*int_ptr;

// 	int_ptr = ft_calloc(0, 0);
// 	if (int_ptr == NULL)
// 	{
// 		printf("%s", "calloc didnt work. ptr null\n");
// 		return 1;
// 	}
// 	else 
// 	{
// 		printf("%s", "calloc successful\n");

// 		for(int i = 0; i < 5; i++)
// 		{
// 			printf("%d ", int_ptr[i]);
// 		}
// 		return 0;
// 	}		
// }