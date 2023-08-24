#include "main.h"
/**
 * _strcat - function  concatenates two strings
 * @dest: pointer to destination value
 * @src:  pointer to scource value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
