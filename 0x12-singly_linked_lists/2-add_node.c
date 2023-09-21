#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of list
 * @head: double pointer to head node
 * @str: new string insert in node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	if(head == NULL || str == NULL)
		return (NULL);

	list_t *new_head = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node-> = strdup(str);
	if (new_node->str ==NULL) 
	{
		free(new_node);
		return (NULL);



	unsigned int len = 0;

	while (str[len])
	len++;
	
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
