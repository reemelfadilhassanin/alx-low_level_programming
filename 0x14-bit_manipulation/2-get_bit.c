#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to search
 * @index: index of the current bit
 *
 * Return: value of the bit found
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

x = 1UL << index;

if (n & x)
{
return (1);
}
else
{
return (0);
}
}
