#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: pointer of memory to be filled
 * @b: constant byte
 * @n: number of byte to be fill
 * Return:pointer @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
