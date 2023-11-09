#include "lists.h"

/**
 * free_dlistint - function that free element in linklist
 * @head: pointer to head node in linked list
 *
 * Description: free linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
