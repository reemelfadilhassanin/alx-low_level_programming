#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value using
 * Interpolation search algorithm.
 *
 * @array: the pointer to the first elemen
 * @size: number of elements in array
 * @value: value to search for
 * Return: index otherwise -1 or null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, h;
	double f;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		f = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		pos = (size_t)(l + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;

		if (l == h)
			break;
	}

	return (-1);
}
