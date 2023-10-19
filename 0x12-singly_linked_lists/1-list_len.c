#include "lists.h"

/**
 * list_len - entry point
 * @h: pointer
 *
 * Return: elements in pointer
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
