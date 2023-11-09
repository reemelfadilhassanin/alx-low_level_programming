#include "lists.h"

/**
 * get_dnodeint_at_index - function with get nth node
 * @head: head pointer to head of linked list
 * @index: nth node to get node
 *
 * Description: returns the nth node of a doubly linked list
 * Return: nth node or NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  wdlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
