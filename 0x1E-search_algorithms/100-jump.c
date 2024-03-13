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
	int index, s, m, prev;

	if (array == NULL || size == 0)
		return (-1);

	s = (int)sqrt((double)size);
	m = 0;
	prev = index = 0;

	do
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		m++;
		prev = index;
		index = m * s;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
