#include "lists.h"

/**
 * get_dnodeint_at_index - function with get nth node
 * @head: head pointer to head of linked list
 * @index: nth node to get node
 *
 * Description: returns the nth node of a doubly linked list
 * Return: nth node or NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  while (head != NULL && index > 0)
    {
        head = head->next;
        index--;
    }

    return head;
}
