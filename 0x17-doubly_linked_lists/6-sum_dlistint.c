#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the,
 * data (n) of a double linked list.
 * @head: pointer to a head node of linked list.
 *
 * If the list is empty, return 0.
 *
 * Return: The sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
dlistint_t *ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
