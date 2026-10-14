/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:03:30 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/15 01:12:23 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static	int	ft_is_space(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

static int	ft_calculate_int(const char **s, int number)
{
	int	i;

	i = 0;
	while ((*s)[i] != '\0')
	{
		if (ft_isdigit((*s)[i]))
			number = (number * 10) + ((*s)[i] - 48);
		else
			return (0);
		i++;
	}
	return (number);
}

int	ft_atoi(const char *s)
{
	int		number;
	int		sign;
	size_t	i;

	number = 0;
	sign = 1;
	i = 0;
	while (ft_is_space(*s))
		s++;
	if (*s == '+')
		s++;
	if (*s == '-')
	{
		sign *= (-1);
		s++;
	}
	while (s[i] != '\0' && !ft_isdigit(s[i]))
	{
		if (ft_isalpha(s[i]))
			return (0);
		i++;
	}
	number = ft_calculate_int(&s, number);
	return (number * sign);
}

// int	main(void)
// {
// 	char str_no[] = "		--17";
// 	int d = ft_atoi(str_no);
// 	printf("%d", d);
// }
