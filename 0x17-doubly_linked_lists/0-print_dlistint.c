#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of linked list
 *
 * Return: number of elements in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++, h = h->next)
		printf("%d\n", h->n);

	return (i);
}
