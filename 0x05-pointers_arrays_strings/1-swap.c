#include "main.h"
/**
 * swap_int - swaps the values two  integers
 * @a: first int  to swap
 * @b: second  int to swap
 */
void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}
