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
	
int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	i++;
	return (dest);
}
