#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: first para
 * @src: second para
 * @n: third para
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
