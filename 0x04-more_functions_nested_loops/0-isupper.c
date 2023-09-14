#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 * @c: the given parameter
 * Return: 1 if uppercase 0 if lower case
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
}
