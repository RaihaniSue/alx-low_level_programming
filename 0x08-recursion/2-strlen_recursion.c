#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: the string to calculate its length
 * Return: 0 Always for success
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
