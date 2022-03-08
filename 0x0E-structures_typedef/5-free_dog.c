#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free funtion free_dog
 * @d: struct dog to print
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	if (d->owner)
		free(d->owner);

	if (d->name)
		free(d->name);

	free(d);
}
