#include "main.h"
/**
 * print_rev - Entry point
 * @s: what point on the parameter that we are going to reverse
 * Return: 0 ALways for sucess
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
