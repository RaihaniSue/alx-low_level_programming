#include "main.h"
/**
 * devisor - first entry point
 * @i: the number to bechecked
 * @j: the devisor
 * Return: 1 if prime, 0 for not
 */
int devisor(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (devisor(i, j + 1));
}

/**
 * is_prime_number - second entry point
 * @n: the number to be checked
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (devisor(n, 2));
}
