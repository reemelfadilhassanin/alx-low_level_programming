#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * of integers using jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located, ortherwise -1 or NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t st = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (prev + st >= size)
			break;

		prev += st;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - st, prev);

	for (size_t i = prev - st; i <= prev; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
