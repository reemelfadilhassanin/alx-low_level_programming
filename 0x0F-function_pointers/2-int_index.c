#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to comapre function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int x = 0;

if (array && size && cmp)
	while (x < size)
{
	if (cmp(array[x]))
		return (x);
	x++;
}
return (-1);
}
