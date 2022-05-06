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
	dlistint_t *temp2 = NULL, *new_node = NULL;

	if (!(*h) && idx) 
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == 1)
	{
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
	}

	while (idx != 1 && temp) 
	{
		temp = temp->next;
		idx--;
	}

	if (!temp)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;

	return (new_node);
}
