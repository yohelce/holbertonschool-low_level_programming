#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *np;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == '0' && ptr)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	np = (char *) ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = np[i];
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = np[i];
	}

	free(ptr);
	return (p);
}
