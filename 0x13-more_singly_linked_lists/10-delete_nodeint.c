#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node  to be deleted
 *
 * Return: 1 if is SUCCESS, or -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *node;
	unsigned int i = 0;

	if (!head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index - 1)
		{
			node = temp->next;
			temp->next = node->next;
			free(node);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
