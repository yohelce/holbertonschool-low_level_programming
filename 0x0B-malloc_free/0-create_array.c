#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		p[i] = c;
	p[i] = 0;
	return (size == 0 ? NULL : p);
}
