#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - unction that returns the sum of all its parameters
 * @n: parameter
 *
 * Return: If n == 0 return 0. Void otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (result);
}
