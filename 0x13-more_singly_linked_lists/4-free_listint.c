#include "lists.h"
/**
 * free_listint - entry point
 * @head: head of the node
 *
 * Return: 0 Always for success
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
