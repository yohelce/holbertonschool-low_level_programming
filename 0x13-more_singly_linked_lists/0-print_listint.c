#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: name of linked list input
 *
 * Return: number of nodes printed.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%lu\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
