#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function to print all arguments of double linked list
 * @h: linked list pointer of head node
 *
 * Description: prints all the elements of doubly linked list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ptr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ptr++;
	}
	return (ptr);
}
