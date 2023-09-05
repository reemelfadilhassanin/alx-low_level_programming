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

	unsigned int i;



	 char *ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		ptr[i] = c;

	return (ptr);

}

