#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types or arguments to be passed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp_s;
	int i = 0, orders;

	while (format && format[i])
	{
		va_start(ap, format);
		while (format[i])
		{
			orders = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				temp_s = va_arg(ap, char*);
				if (temp_s)
				{
					printf("%s", temp_s);
					break;
				}
				printf("(nil)");
				break;
			default:
				orders = 0;
				break;
			}
			if (format[i] && orders)
				printf(", ");
		}
		va_end(ap);
	}
	printf("\n");
}
