#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - find loop in list
 * @head: A pointer to the head of list
 *
 * Return: The address of the node where the loop starts.
 * Otherwise - NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ptr, *end;

if (head == NULL)
return (NULL);

for (end = head->next; end != NULL; end = end->next)
{
if (end == end->next)
return (end);

for (ptr = head; ptr != end; ptr = ptr->next)
if (ptr == end->next)
return (end->next);
}
return (NULL);
}
