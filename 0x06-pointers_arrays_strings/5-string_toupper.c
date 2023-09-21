#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Entry point
 * @p: a pointer
 * Return: the pointer
 */
char *string_toupper(char *p)
{
	int x;

	for (x = 0; p[x] != '\0'; x++)
	{
		if (p[x] >= 'a' && p[x] <= 'z')
			p[x] = p[x] - 32;
	}
	return (p);
}
