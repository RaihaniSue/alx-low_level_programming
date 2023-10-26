#include "main.h"
/**
 * set_bit - entry point
 * @n: long integer
 * @index: at indexied value
 *
 * Return: 1 for success -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

