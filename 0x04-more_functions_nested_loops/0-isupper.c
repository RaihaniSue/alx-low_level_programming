#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 * @c: the given parameter
 * Return: 1 if uppercase 0 if lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
