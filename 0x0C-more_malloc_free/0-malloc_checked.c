#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: integer number
 * Return: a pointer to malloc
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (ptr);
}
