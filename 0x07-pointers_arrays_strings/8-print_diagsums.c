#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: the name of the array
 * @size: the size of array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int x, z, y;

	x = 0;
	z = 0;

	for (y = 0; y < size; y++)
	{
		x = x + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		z += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", x, z);
}

