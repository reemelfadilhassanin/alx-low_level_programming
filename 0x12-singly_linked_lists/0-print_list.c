#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns length of string
 *@s: pointer string to be check 
 *
 *Return: integer length
 */
int_strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}


/**
 * print_list - prints all of linked list
 * @h: pointer to first node
 *
 * Return: size of list  printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{

		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}

	return (x);
}
