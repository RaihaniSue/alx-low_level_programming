#include <stdlib.h>

/**
 * count_words - Helper function to count the number of words in a string.
 * @input_str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *input_str)
{
	int is_space = 0;
	int char_count = 0;
	int word_count = 0;

	for (int i = 0; input_str[i] != '\0'; i++)
	{
		if (input_str[i] == ' ')
			is_space = 0;
		else if (is_space == 0)
		{
			is_space = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str_to_split: The input string to split.
 *
 * Return: A pointer to an array of strings (Success), or NULL (Error).
 */
char **strtow(char *str_to_split)
{
	char **result_matrix, *temp;
	int index, matrix_index = 0, len = 0, words, char_count = 0, start, end;

	while (*(str_to_split + len))
		len++;
	words = count_words(str_to_split);
	if (words == 0)
		return (NULL);

	result_matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (result_matrix == NULL)
		return (NULL);

	for (index = 0; index <= len; index++)
	{
		if (str_to_split[index] == ' ' || str_to_split[index] == '\0')
		{
			if (char_count)
			{
				end = index;
				temp = (char *)malloc(sizeof(char) * (char_count + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str_to_split[start++];
				*temp = '\0';
				result_matrix[matrix_index] = temp - char_count;
				matrix_index++;
				char_count = 0;
			}
		}
		else if (char_count++ == 0)
			start = index;
	}

	result_matrix[matrix_index] = NULL;

	return (result_matrix);
}
