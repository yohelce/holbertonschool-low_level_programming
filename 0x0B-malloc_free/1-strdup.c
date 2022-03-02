#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	for (i = 0; str[i] != 0; i++)
		dup[i] = str[i];
	dup[i] = 0;
	return (dup);
}
