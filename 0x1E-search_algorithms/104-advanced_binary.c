#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value
 *                    using advanced binary search.
 * @array: A pointer to the first element of the array
 * @size: The number of elements in array
 * @value: The value to search
 *
 * Return: The index, otherwise -1 or null
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, m;
	int r;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	m = (size - 1) / 2;

	if (array[m] == value)
	{
		if (m == 0 || array[m - 1] < value)
			return (m);
		else
			return advanced_binary(array, m + 1, value);
	}
	else if (array[m] < value)
	{
		r = advanced_binary(array + m + 1, size - m - 1, value);
		if (r != -1)
			return (m + 1 + r);
	}
	else
	{
		return advanced_binary(array, m, value);
	}

	return (-1);
}
