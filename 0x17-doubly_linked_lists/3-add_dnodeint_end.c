#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - function with one argument to add node at end of list
 * @head: double pointer to first node in double linked list
 * @n: value of data node
 *
 * Description: add a new node at the end list
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL, *new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		if (*head)
		{
			tmp_node = *head;
			while (tmp_node->next)
				tmp_node = tmp_node->next;
			tmp_node->next = new;
			new->prev = tmp_node;
		}
		else
        
			*head = new;
	}
	return (new);
}
