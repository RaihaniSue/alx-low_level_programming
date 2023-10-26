#include "main.h"
/**
 * clear_bit - entry point
 * @n: long integer
 * @index: indexing to a bit
 *
 * Return: 1 for success and -1 for errors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}


