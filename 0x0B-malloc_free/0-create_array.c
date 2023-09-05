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

while (i < size)
{ 
	if (x == NULL)
	{
		return (NULL);
	}
	x[i] = c;
	i++;
}
return (x);
}

