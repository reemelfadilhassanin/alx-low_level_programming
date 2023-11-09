#include "lists.h"

/**
 * add_dnodeint - function with two arguments to addd new mode in list
 * @head: pointer to head node of double linked list
 * @n: data part for each node
 *
 * Description: adds a new node at the beginning
 * Return: address of new element or NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (new ? free(new) , NULL : NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}
	return (new);
}
