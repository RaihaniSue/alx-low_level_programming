#include "main.h"
/**
 * print_rev - Entry point
 * @s: what point on the parameter that we are going to reverse
 * Return: 0 ALways for sucess
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
