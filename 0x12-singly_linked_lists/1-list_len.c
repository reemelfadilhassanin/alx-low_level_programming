#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that determine length of elements in a linked list
 * @h: pointer to first node
 *
 * Return: thee length of list
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

