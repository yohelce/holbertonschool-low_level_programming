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
	char *p;

	p = malloc(new_size);
	if (ptr == NULL)
		return (p);

	if (new_size == old_size)
		return (ptr);

	if (new_size == '0' && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		free(ptr);
		return (p);
	}

	return (ptr);
}
