#include "main.h"

/**
 * divisor - returns 1 is n is a prime and 0 otherwise
 * @n: number to analyse
 * @i: divisor
 *
 * Return: int
 */

int divisor(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0 || n == 1)
		return (0);
	return (divisor(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n: number to analyse if is prime number
 *
 * Return: 1 if is prime number otherwise 0.
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (divisor(n, 2));
}
