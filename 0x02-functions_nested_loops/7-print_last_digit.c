#include "main.h"
/**
 * print_last_digit - Entry point
 * @r: the given number to print its last digit
 * Return: always last digit
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
		r = -r;

	i = r % 10;

	if (r < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
