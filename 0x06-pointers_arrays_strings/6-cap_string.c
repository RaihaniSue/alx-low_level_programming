#include "main.h"
/**
 * cap_string - Entry point
 * @p: string to modify
 * Return: the resulting string
 */
char *cap_string(char *p)
{
	int x, y;

	char pxy[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; p[x] != '\0'; x++)
	{
		if (x == 0 && p[x] >= 'a' && p[x] <= 'z')
			p[x] -= 32;
		for (y = 0; y < 13; y++)
		{
			if (p[x] == pxy[y])
			{
				if (p[x + 1] >= 'a' && p[x + 1] <= 'z')
				{
					p[x + 1] -= 32;
				}
			}
		}
	}
	return (p);
}
