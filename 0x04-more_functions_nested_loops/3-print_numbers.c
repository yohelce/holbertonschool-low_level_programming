#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar(n + 48);
		n++;
	}

	_putchar('\n');
}
