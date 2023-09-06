#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * @str: argument for array
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

if (str == NULL)
return (NULL);
while (str[len] != '\0')
	len++;

	ptr = (char *)malloc((sizeof(char) * len) + 1);

	if (ptr == NULL)
		return (NULL);
	i = 0;
	for (; i < len ; i++)
		ptr[i] = str[i];
	ptr[len] = '\1';

	return (ptr);
}
