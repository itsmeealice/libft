/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:51:35 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/23 11:45:03 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	int	ft_is_in_set(char a, const char *set)
{
	int	len_set;
	int	i;

	len_set = ft_strlen(set);
	i = 0;
	while (i < len_set)
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

static void	trim(char const *s1, char *new_str, int ind_start, int ind_end)
{
	int	i;
	int	j;

	i = ind_start;
	j = 0;
	while (i <= ind_end)
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ind_start;
	int		ind_end ;
	char	*new_str;
	size_t	new_str_len;

	ind_start = 0;
	ind_end = ft_strlen(s1) - 1;
	new_str_len = 0;
	while (s1[ind_start] != '\0' && ft_is_in_set(s1[ind_start], set))
		ind_start ++;
	while (ind_end > ind_start && ft_is_in_set(s1[ind_end], set))
		ind_end --;
	new_str_len = ind_end - ind_start + 1;
	new_str = malloc(new_str_len + 1);
	if (new_str == NULL)
		return (NULL);
	trim(s1, new_str, ind_start, ind_end);
	return (new_str);
}

// int main(void)
// {
// 	char s[] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	char set[] = "et";
// 	char *new_str = ft_strtrim(s, set);

// 	printf("%s", new_str);
// 	return (0);
// }