#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr;

	if (!str)
		return (NULL);

	ptr = str;
	while (*ptr++)
		size++;

	char *a = malloc(size + 1);

	if (!a)
		return (NULL);

	ptr = a;
	while (*str)
		*ptr++ = *str++;

	*ptr = 0;
	return (a);
}
