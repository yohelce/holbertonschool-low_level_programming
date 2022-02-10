#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58 && (n != 50 || n != 52))
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
