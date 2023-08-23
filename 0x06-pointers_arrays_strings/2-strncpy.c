#include "main.h"
/**
 * _strncpy -  function that copies a string.
 * @dest: pointer for dest value
 * @src: pointer for src  value
 * @n: most n bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
