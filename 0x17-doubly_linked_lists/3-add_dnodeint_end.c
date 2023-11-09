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
	dlistint_t *new = NULL, *tp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tp = *head;
		while (tp && tp->next)
			tp = tp->next;
		tp->next = new;
		new->prev = tp;
	}
	return (new);
}
