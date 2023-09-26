#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: first character parameter
 * @b: second character parameter
 * @n: the unsigned integer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(s + x) = b;
		x++;
	}

	return (s);
}
