#include "main.h"
/**
 * puts2 - Entry point
 * @str: the parameter to be printed in every line
 * Return: 0 Always for success
 */
void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
