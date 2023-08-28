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

int x;

for (x = 0; x < n; x++)

{
	s[x] = b;
}
return (s);
}
