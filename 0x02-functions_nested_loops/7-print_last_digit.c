#include "main.h"
/**
 * print_last_digit - Entry point
 * @r: the given number to print its last digit
 * Return: always last digit
 */
int print_last_digit(int r)
{
	if ((r % 10) == 0)
	{
		_putchar(48);
	}
	return(r % 10);
}
