#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to first node in the linked list
 * @index: index of the node to print
 *
 * Return: pointer to the node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node = head;

	while (node && n < index)
	{
		node = node->next;
		n++;
	}

	return (node ? node : NULL);
}
