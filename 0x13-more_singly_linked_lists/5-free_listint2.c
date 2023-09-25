#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to first node to be freed
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
		return;

	while (*head)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
	}

	*head = NULL;
}
