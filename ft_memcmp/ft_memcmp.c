/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:40:32 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/13 12:51:47 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// void	*ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char	*s1;
// 	unsigned char	*s2;
// 	size_t			i;

	
// }
int main(void)
{
    char s1[100] = "something";
    char s2[100] = "something";

    char *ptr = memcmp(s1, s2, 3);
    
    if(ptr)
        printf("%s", ptr);
}