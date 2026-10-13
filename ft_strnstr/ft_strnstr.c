/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:28:30 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/13 14:48:33 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    size_t little_len;

    if(0 == (little_len = ft_strlen(little)))
        return (char *) little;
    

}

int main(void)
{
    char a[] = "myabcdABC";
    char to_find[] = "abc";

    printf("%s" , strnstr(a, to_find));

}