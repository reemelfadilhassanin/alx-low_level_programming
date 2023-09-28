#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to change
 * @index: index of the bit to set 1
 *
 * Return: 1 for success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m;

	if (index > 63)
		return (-1);
	m = 1UL << index;

	*n |= m;
	return (1);
}
