#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i;

	for (j--; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
