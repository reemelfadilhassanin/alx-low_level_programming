#include <stdio.h>
#include "search_algos.h"
/**
 * adva_search - advance search
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the value
 */

int adva_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (adva_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (adva_search(array, half + 1, value));

	half++;
	return (adva_search(array + half, size - half, value) + half);
}

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
	int index;

	index = adva_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
