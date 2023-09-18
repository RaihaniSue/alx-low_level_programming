#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - Entry point
 * @n: the given parameter
 * Return: 0 Always for Success
 */
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 402;
	return (n);
}
