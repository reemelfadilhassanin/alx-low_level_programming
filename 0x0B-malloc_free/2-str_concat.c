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
	char *ptr;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	ptr = malloc(sizeof(char) * (x + y + 1));

	if (x == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		ptr[x] = s2[y];
		x++, y++;
	}
	ptr[x] = '\0';
	return (ptr);
}

