#include "main.h"

/**
 * more_numbers - Entry point
 * Return: printing ten times numbers from 0 to 14
 */
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = '0'; c <= '9' +4; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
