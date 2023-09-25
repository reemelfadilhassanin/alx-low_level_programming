#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
