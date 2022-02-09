#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}

	else if (i == 0)
	{
		printf("%d is zero", i);
	}

	else if (i < 0)
	{
		printf("%d is negative", i);
	}

        return (0);
}
