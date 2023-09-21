#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 * @a: the first pointer
 * @n: the second pointer
 */
void reverse_array(int *a, int n)
{
	int x, y, t;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		t = a[x];
		a[x] = a[y];
		a[y--] = t;
	}
}
