#include "lists.h"

/**
 * print_list - entry point
 * @h: lists to be printed
 *
 * Return: num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (!t->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		t++;
	}

	return (t);
}
