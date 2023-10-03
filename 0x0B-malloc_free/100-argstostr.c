#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command line arguments into a single string.
 * @ac: The number of command line arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string (Success), or NULL (Error).
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, str_index = 0;
	char *result_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++; /* Add 1 for the newline character */
	}

	result_string = malloc(sizeof(char) * (total_length + 1));
	if (result_string == NULL)
		return (NULL);

	/* Concatenate the strings */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result_string[str_index++] = av[i][j];
		}
		result_string[str_index++] = '\n'; /* Add newline character */
	}

	result_string[str_index] = '\0'; /* Null-terminate the result string */
	return (result_string);
}
