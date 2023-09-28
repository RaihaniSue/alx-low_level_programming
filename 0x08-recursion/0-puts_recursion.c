#include "main.h"
/**
 * _puts_recursion - Entry point
 * main - the recursion
 * @s: the string to print
 * Return: the character
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
int main(void)
{
	char *str = "Puts with recursion";

	_puts_recursion(str);
	return (0);
}
