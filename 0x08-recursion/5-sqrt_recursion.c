#include "main.h"
/**
 * _sqrt_recursion - Entry point
 * @n: the integer parameter
 * Return: 0 for success -1 for failure
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	int i = _sqrt_recursion(n - 1);

	if (i * i <= n)
	{
		return (i);
	}
	else
	{
		return (i - 1);
	}
}
