#include "lists.h"
/**
 * print_listint - function that prints all the elements of a linked list
 * @h: pointer to first node
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
