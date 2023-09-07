#include "notrebloh.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocate memory size function
 * @ptr: old memory location
 * @old_size: int
 * @new_size: int
 * Return:  return pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;

	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		free(ptr1);
		return (ptr1);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		free(ptr);
		return (ptr1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
