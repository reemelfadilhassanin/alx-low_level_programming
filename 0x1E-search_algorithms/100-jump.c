#include <math.h>
#include "search_algos.h"

/**
 * jump_search - this searches for a value using Jump search.
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: number index value otherwise -1
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
