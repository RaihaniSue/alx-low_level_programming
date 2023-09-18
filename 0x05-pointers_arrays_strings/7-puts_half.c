#include "main.h"
/**
 * puts_half - Entry point
 * @str: prints half of a string, followed by a new line
 * Return: 0 always for Success
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}

	for (; k < j; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
