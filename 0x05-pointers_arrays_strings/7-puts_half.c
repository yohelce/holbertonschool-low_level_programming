#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;
	int length;

	i = 0;
	j = 0;

	while (str[i])
		i++;

	length = i;

	if (length % 2 == 0)
	{
		for (j = length / 2; j < length; j++)
			_putchar(str[j]);
	}

	if (length % 2 != 0)
	{
		for (j = (length + 1) / 2; j < length; j++)
			_putchar(str[j]);
	}
	_putchar(10);
}
