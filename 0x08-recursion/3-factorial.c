#include "main.h"
/**
 * factorial - Entry point
 * @n: the integer to calculate its factorial
 * Return: 0 for success -1 for failure
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
