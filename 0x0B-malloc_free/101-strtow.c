#include "main.h"
#include <stdlib.h>

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int is_space = 0;
	int word_count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			is_space = 0;
		else if (is_space == 0)
		{
			is_space = 1;
			word_count++;
		}
		i++;
	}

	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (Success), or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i = 0, matrix_index = 0, len = 0, words, char_count = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_count)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (char_count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[matrix_index] = tmp - char_count;
				matrix_index++;
				char_count = 0;
			}
		}
		else if (char_count++ == 0)
			start = i;
	}

	matrix[matrix_index] = NULL;

	return (matrix);
}
