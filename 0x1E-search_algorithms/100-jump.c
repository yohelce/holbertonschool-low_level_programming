#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to look into
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value found, or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, prev, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	while (start < size && array[start] < value)
	{
		prev = start;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		start = step + start;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, start);
	if (start > (size - 1))
		start = size - 1;

	/* Linear search */
	while (prev <= start && array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
