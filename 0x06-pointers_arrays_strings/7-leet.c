#include "main.h"
/**
 * leet - Entery point
 * @p: pointer
 * Return: the pointer result
 */
char *leet(char *p)
{
	int x, y;

	char *i = "aAeEoOtTlL";
	char *j = "4433007711";

	for (x = 0; p[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (p[x] == i[y])
			{
				p[x] = j[y];
			}
		}
	}
	return (p);
}
