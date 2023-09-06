#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
 * @s1: first string
 * @s2: seconed string
 * Return: concat of two string
*/
char *str_concat(char *s1, char *s2)
{
	char *copy;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	copy = malloc(sizeof(char) * (len1 + len2 + 1));
	if (copy == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			copy[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			copy[i] = s2[j];
			i++;
			j++;
		}
	}
	copy[i] = '\0';

	return (copy);
}

