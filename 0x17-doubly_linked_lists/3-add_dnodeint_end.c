#include "lists.h"

/**
 * add_dnodeint_end - function that adds node at the end of a list.
 * @head: pointer to pointer to head node of list.
 * @n: data value to be added
 *
 * Return: address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new, *l;

	new = malloc(sizeof(dlistint_t));

	
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = NULL;

	l = *head;

	
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		
		while (l->next)
			l = l->next;

		l->next = new;
	}
	new->prev = l;

	return (new);
}
