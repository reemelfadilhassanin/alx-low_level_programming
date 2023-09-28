#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number as string
 *
 * Return: the converted binary to int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;

if (b == NULL)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);

res = (res << 1) | (*b - '0');
b++;
}
return (res);
}
