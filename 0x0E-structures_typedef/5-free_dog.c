# include <stdio.h>
#include "main.h"
/**
 * free_dog - free allocated memory 
 * @d: pointer 
 */
void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
free(d);
	}}
