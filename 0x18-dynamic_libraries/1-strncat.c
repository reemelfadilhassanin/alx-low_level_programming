#include "main.h"
/**
 * _strncat - fuunction concatenate two strings
 * @dest: pointer to destination value
 * @src: pointer to source value
 * @n: most n bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
