#include "main.h"
/**
 * look_for_root - a first entry point
 * @i: integer parameter
 * @j: test a root
 * Return: 0 for Sucess -1 for failure
 */
int look_for_root(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	else if (j * j == i)
	{
		return (j);
	}
	return (look_for_root(i, j + 1));
}
/**
 * _sqrt_recursion - a second entry point
 * @n: the integer
 * Return: 0 for success -1 for failure
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (look_for_root(n, 0));
}
