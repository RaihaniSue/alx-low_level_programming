#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Entry point
 * @array: array
 * @size: the elements to print
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
