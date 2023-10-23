#include "lists.h"
/**
 * sum_listint - entry point
 * @head: the head of the node
 *
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
