#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 *
 * Return: void
 */
 
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
