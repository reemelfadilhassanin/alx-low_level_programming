#include "main.h"
#include <stdlib.h>

/**
 *  create_array - create array of size size and assign char c
 *  @size: size of array
 *  @c: arrgument for char
 *  Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i;

x = malloc(size);

if (size == 0 || x == NULL)

		return (NULL);

for (i = 0; i < size; i++)

		x[i] = c;
return (x);
}

