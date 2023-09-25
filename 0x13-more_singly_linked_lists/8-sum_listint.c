#include "lists.h"

/**
 * sum_listint - return the sum of all the data in a  list
 * @head: pointer to first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
