/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:43:24 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/26 11:31:59 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long long *n, int *isnegative)
{
	int	count;
	int	n_copy;

	count = 0;
	n_copy = 0;
	if (*n == 0)
		return (1);
	if (*n < 0)
	{
		count++;
		*isnegative = 1;
		*n *= (-1);
	}
	n_copy = *n;
	while (n_copy)
	{
		n_copy /= 10;
		count ++;
	}
	return (count);
}

static long long	ft_pow(int n, int power)
{
	long long	number;

	number = 1;
	while (power)
	{
		number *= n;
		power --;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	int			is_negative;
	long long	n_long;
	int			digits_no;
	char		*digit_str;
	int			k;

	is_negative = 0;
	n_long = n;
	digits_no = digit_count(&n_long, &is_negative);
	digit_str = malloc(digits_no + 1);
	if (digit_str == NULL)
		return (NULL);
	k = 0;
	if (is_negative)
	{
		digit_str[k++] = '-';
		digits_no --;
	}
	while ((digits_no - 1) >= 0)
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