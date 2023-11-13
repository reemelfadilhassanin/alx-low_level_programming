#include "main.h"
/**
 * _memcpy - Function of opies memory area
 *
 * @dest: pointer where to copy the memory to
 * @n: the number of bytes
 * @src: pointer of  memory area to copy from
 *
 * Return: a pointer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
