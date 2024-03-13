#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - function to search value using linear algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return value, otherwise return
 * NULL,or returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
		return (-1);
	while (a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
