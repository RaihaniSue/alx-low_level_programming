#include "main.h"

/**
 * print_line - main entry
 * @n: is the number of _ to form the straight line to be printed
 * Return: a printed line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
