#include "main.h"

/**
 * print_line - main entry
 * @n: is the number of _ to form the straight line to be printed
 * Return: a printed line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		int k = -n;

		for (i = 1; i <= k ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
