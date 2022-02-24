#include "main.h"

/**
 * divisor - find a sqrt
 * @n: number to check for natural square root
 * @i: divisor
 *
 * Return: natural sqrt or -1
 */

int divisor(int n, int i)
{
	if (i * i  > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (divisor(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (divisor(n, 1));
}
