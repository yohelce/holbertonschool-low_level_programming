#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: double pointer to the first node in the list
 * @n: data to insert in that node
 *
 * Return: pointer to the new node or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
