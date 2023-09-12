#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: 1 (success) 0 (fail)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
}
