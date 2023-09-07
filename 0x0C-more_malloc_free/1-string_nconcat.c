#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string one
 * @s2: string two
 *@n:number of bytes from s1 to s2
 * Return: pointer of string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	{
	char *ptr;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ptr = malloc(sizeof(*ptr) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		ptr[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}
