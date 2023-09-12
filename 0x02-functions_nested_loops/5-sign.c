#include "main.h"
/**
 * print_sign - Entry point
 * @n: the given parameter
 * Return: 1 (positive) 0 (zero) -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n <= 0)
	{
		_putchar('-');
	}
		return (-1);
}
