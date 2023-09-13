#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  prints a name to function
 * @name: string
 * @f: pointer to function
 * Returen: No returen
 */
void print_name(char *name, void (*f)(char *))
{

	if (name && f)
		f(name);
}
