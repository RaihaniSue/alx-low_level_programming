#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point
 * @c: the given parameter
 * Return: 1 if uppercase 0 if lower case
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
