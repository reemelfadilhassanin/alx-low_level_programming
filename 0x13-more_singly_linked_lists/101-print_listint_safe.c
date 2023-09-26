#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count unique nodes in loop list
 * @head: A pointer to first node in list
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *first, *two;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

first = head->next;
two = (head->next)->next;

while (two)
{
if (first == two)
{
first = head;
while (first != two)
{
nodes++;
first = first->next;
two = two->next;
}

first = first->next;
while (first != two)
{
nodes++;
first = first->next;
}

return (nodes);
}

first = first->next;
two = (two->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to first node in list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, i = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (i = 0; i < nodes; i++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}

