#include "lists.h"
/**
 * get_nodeint_at_index - entry point
 * @head: the head of the node
 * @index: indexing the node
 *
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
