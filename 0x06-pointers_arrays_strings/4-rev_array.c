#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 * @a: the first pointer
 * @n: the second pointer
 * Return: 0 Always for success
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[j] = tmp;
		i++;
		j--;
	}
}
