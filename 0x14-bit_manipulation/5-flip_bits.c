#include "main.h"
/**
 * flip_bits - entry point
 * @n: the unsigned integer
 * @m: another unsigned int
 *
 * Return: the num of bits needed to flip from one to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}

