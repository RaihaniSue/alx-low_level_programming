#include "main.h"
/**
 * _puts - Entry point
 * @str: what points to the string to print
 * Return: 0 Always for sucess
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
