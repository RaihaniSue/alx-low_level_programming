#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Entry point
 * @s1: the first pointer
 * @s2: the second pointer
 * Return: 0 Always for success
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
