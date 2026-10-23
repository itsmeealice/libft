/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:05:48 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/23 15:40:45 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	separators_no_loc(char const *s, char c, int sep[])
{
	size_t	i;
	size_t	k;

	k = 0;
	sep[0] = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			sep[++k] = i;
		i++;
	}
	sep[++k] = i;
	return (k + 1);
}

static char	*copy_string(char const *s, int ind_start, int ind_finish)
{
	char	*new_str;
	int		k;
	int		i;

	new_str = malloc(ind_finish - ind_start + 2);
	if (!new_str)
		return (NULL);
	k = -1;
	i = ind_start;
	while (ind_start <= ind_finish)
		new_str[++k] = s[ind_start++];
	new_str[++k] = '\0';
	return (new_str);
}

static void	free_words(char **mat, int words)
{
	while (words--)
		free(mat[words]);
	free(mat);
}

static int	count_words(int sep[], int *sep_no, char const *s, char c)
{
	int	i;
	int	words;

	i = -1;
	words = 0;
	*sep_no = separators_no_loc(s, c, sep);
	while (++i < *sep_no - 1)
		if ((sep[i + 1] - sep[i]) > 1)
			words++;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		sep[100];
	int		sep_no;
	int		j;
	int		i;

	if (!s)
		return (NULL);
	mat = malloc(sizeof(char *) * (count_words(sep, &sep_no, s, c) + 1));
	if (!mat)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < (sep_no - 1))
	{
		if ((sep[i + 1] - sep[i]) > 1)
		{
			mat[j] = copy_string(s, sep[i] + 1, sep[i + 1] - 1);
			if (!mat[j])
				return (free_words(mat, j), NULL);
			j++;
		}
	}
	mat[j] = NULL;
	return (mat);
}

// void print_words(char **words)
// {
//     for (int i = 0; words[i] != NULL; i++)
//         printf("%s\n", words[i]);
//     printf("\n");
// }

// int main(void)
// {
//     char **words;

//     words = ft_split("hello", 'x');
//     print_words(words);

//     words = ft_split("xxx", 'x');
//     print_words(words);

//     words = ft_split("", 'x');
//     print_words(words);

//     words = ft_split("xhello", 'x');
//     print_words(words);

//     words = ft_split("hellox", 'x');
//     print_words(words);

//     words = ft_split("hello", 'l');
//     print_words(words);

//     words = ft_split("  hello  world  ", ' ');
//     print_words(words);
// }