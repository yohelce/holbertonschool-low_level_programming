#include "lists.h"

/**
 * insert_dnodeint_at_index - that inserts a new node at a given position
 * @h: head of linked list
 * @idx: index
 * @n: integer to be added
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;
	dlistint_t *new_node;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}

	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;

	return (new_node);
}
