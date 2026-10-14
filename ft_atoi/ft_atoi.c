/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:03:30 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/14 20:46:09 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

static int ft_is_space(const char c)
{
    if(c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
    {
        return 1;
    }
    return 0;
}

int ft_atoi(const char* s)
{
    int number = 0;
    size_t s_len = ft_strlen(s);
    int sign = 1;
    size_t i = 0;

    /// 1 skip leading spaces

    while(ft_is_space(*s))
    {
        s++;
    }

    /// 2 
    
    if(*s == '+')
        s++;
    
    if(*s == '-')
    {
        sign *= (-1);
        s++;
    }
    while(s[i] != '\0')
    {
        if(ft_isdigit(s[i]))
            break;
        if(ft_isalpha(s[i]))
            return 0;
        i++;
    }

    i = 0;

    while(s[i] != '\0')
    {
        if(ft_isdigit(s[i]))
            number = (number * 10) + (s[i] - 48);
        else break;
        i++;
    }    

    return (number * sign);
}

int main(void)
{
    char str_no[] = "       --17acb";
    int d = ft_atoi(str_no);
    printf("%d", d);
    
}
