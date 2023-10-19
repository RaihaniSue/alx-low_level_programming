#include "lists.h"

/**
 * add_node - entry point
 * @head: two times pointer
 * @str: the string to be added
 *
 * Return: the address of the n element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->l = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
