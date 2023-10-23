#include "lists.h"
/**
 * add_nodeint - Entry point
 * @n: an integer
 * @head: the heading of the node
 *
 * Return: address of the new element NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
