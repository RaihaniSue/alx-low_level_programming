#include "main.h"

/**
 * print_numbers - Entry point
 * Return: numbers printed
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
