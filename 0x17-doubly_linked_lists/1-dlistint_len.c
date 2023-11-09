#include "lists.h"

/**
 * dlistint_len - function with one argument return len of list
 * @h: pointer to head node of doubly linked list
 *
 * Description: count number of elements in doubly
 * Return: total number of elements in double list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ptr = 0;

	while (h != NULL)
	{
		h = h->next;
		ptr++;
	}
	return (ptr);
}
