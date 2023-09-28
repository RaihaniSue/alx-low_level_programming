#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: the first parameter
 * @y: the second parameter
 * Return: 0 Always for success -1 for failure
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
