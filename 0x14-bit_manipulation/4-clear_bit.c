#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
