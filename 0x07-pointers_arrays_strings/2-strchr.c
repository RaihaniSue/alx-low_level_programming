#include "main.h"
/**
 * _strchr - Entry point
 * @s: first character parameter
 * @c: second character parameter
 * Return: a pointer to the first occurence of the
 * character c in the string s or NULL if the 
 * character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	if (c == '\0')
	{
		return s;
	}
	return NULL;
}
