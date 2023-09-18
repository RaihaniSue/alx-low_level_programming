#include "main.h"
#include <std.io>
/**
 * print_array - Entry point
 * @a: first pointer
 * @n: second pointer
 * Return: 0 Always for Success
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
