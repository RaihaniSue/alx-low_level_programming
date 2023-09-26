#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: first character parameter
 * @b: second character parameter
 * @n: the unsigned integer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
