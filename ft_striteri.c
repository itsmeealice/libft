/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:37:50 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 22:13:32 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// void touppercase(unsigned int c, char *a)
// {
//     if(c % 2 == 0)
//     {
//         a[c] = ft_toupper((int)a[c]);
//     }
// }

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i = 0;
    while (s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}

// int main(void)
// {
//     char s[100] = "abcdefg";

//     ft_striteri(s, touppercase);

//     for(size_t i = 0; i < ft_strlen(s); i++)
//         printf("%c ", s[i]);
// }