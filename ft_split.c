
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int separators(char *s, char c, int sep[])
{
    int s_len = strlen(s);
    int k = 0;

    sep[0] = -1; 
    for (int i = 0; i < s_len; i++) 
    {
        if (s[i] == c)
        {
            ++k;
            sep[k] = i;
        }
    }
    ++k;
    sep[k] = s_len; 
    return k;
}

int word_count(char *s, char c)
{
    int sep[100];
    int no_of_sep = separators(s, c, sep);
    int words = 0;

    // CHANGED 
    for (int i = 0; i < no_of_sep; i++)
    {
        if (sep[i + 1] - sep[i] > 1) // CHANGED: compare boundaries directly
            words++;
    }
    return words;
}

char *copy_string(char *s, int ind_start, int ind_finish)
{
    char *new_str = malloc(ind_finish - ind_start + 2);
    if (!new_str) // ADDED: handle allocation failure
        return NULL;

    int k = 0;
    for (int i = ind_start; i <= ind_finish; i++)
        new_str[k++] = s[i];

    new_str[k] = '\0'; // CHANGED: terminate with the null character, not 'N'
    return new_str;
}

char **ft_split(char const *s, char c) 
{
    if (!s) 
        return NULL;

    int words_count = word_count((char *)s, c); 
    char **word_matrix = malloc((words_count + 1) * sizeof(char *));
    if (!word_matrix) // ADDED: handle allocation failure
        return NULL;

    int sep[100];
    int sep_number = separators((char *)s, c, sep); // ADDED: cast for existing helper
    int word_index = 0;

    // CHANGED: removed ft_strtrim() and the invalid set allocation
    for (int i = 0; i < sep_number; i++)
    {
        if (sep[i + 1] - sep[i] > 1) // CHANGED: use consistent boundary differences
        {
            word_matrix[word_index] = copy_string(
                (char *)s, sep[i] + 1, sep[i + 1] - 1);

            if (!word_matrix[word_index]) // ADDED: handle copy allocation failure
            {
                for (int j = 0; j < word_index; j++)
                    free(word_matrix[j]); // ADDED: free previously allocated words
                free(word_matrix); // ADDED: free the array
                return NULL;
            }
            word_index++;
        }
    }
    word_matrix[word_index] = NULL;
    return word_matrix;
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