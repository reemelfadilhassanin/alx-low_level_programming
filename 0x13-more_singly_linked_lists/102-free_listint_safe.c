#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to the first node in LL
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int x;
	listint_t *y;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			y = (*h)->next;
			free(*h);
			*h = y;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
