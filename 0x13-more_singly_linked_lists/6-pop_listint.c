#include "lists.h"
/**
 * pop_listint - entry point
 * @head: the head pointer
 *
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
