#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: size of array
 * @c: char
 * Description: create array of chars and initiliaze with specific c
 * Return: pointer to array  orNULL for fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
