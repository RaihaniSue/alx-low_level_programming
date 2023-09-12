#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: is given parameter
 * Return: it is a void function
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("%d\n", 98);
}
