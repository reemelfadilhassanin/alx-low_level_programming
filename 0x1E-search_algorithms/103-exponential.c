#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - Searches for a value using binary search
 * @array: A pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, otherwise -1 or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;

		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - this to prints the elements of an array
 * @array: A pointer to the first element of array
 * @s: The starting the range
 * @end: The ending the range
 */
void print_array(int *array, size_t s, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = s; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * exponential_search - Searches for a value
 * using exponential search algorithm
 * @array: A pointer to the first element
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index, otherwise -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search(array + left, right - left + 1, value));
}
