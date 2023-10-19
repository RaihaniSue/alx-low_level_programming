#include "lists.h"

/**
 * add_node_end - entry point
 * @head: two times pointer
 * @str: string
 *
 * Return: address of the n element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->l = l;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n;

	return (n);
}
