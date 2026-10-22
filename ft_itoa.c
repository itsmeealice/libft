/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:43:24 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 09:41:10 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

static int digit_count(long long *n, int *isnegative)
{
    int count = 0;
    int n_copy = 0;

    if(*n == 0)
        return(1);

    if(*n < 0)
    {
        count++;
        *isnegative = 1;
        *n *= (-1);
    }
    n_copy = *n;
    while(n_copy)
    {
        n_copy /= 10;
        count ++;
    }
    
    return (count);
}

long long ft_pow(int n, int power)
{
    long long number = 1;
    while(power)
    {
        number *= n;
        power --;
    }
    return (number);
}

char *ft_itoa(int n)
{
    int is_negative = 0;
    long long n_long = n;
    int digits_no = digit_count(&n_long, &is_negative);
    char * digit_str = malloc(digits_no + 1);
    
    if(digit_str == NULL)
        return(NULL);
    int k = 0;


    if(is_negative)
    {
        digit_str[k] = '-';
        k++;
        digits_no --;
    }
    
    while((digits_no - 1) >= 0)
    {
        digit_str[k ++] = ((n_long / ft_pow(10, digits_no - 1)) % 10) + '0';
        digits_no --;
        
    }
    digit_str[k] = '\0';
   
    return (digit_str);
}
// int main(void)
// {
//     int nr = 0;
//     char * ch_nr;
//     ft_itoa(nr);
//     ch_nr = ft_itoa(nr);
//     printf("ft_itoa result: %s\n", ch_nr);
//     printf("INT MIN : %d", INT_MIN);

// }