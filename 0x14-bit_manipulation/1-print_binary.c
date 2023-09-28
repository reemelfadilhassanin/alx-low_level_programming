#include "main.h"

/**
 * print_binary - function that prints the binarynumber
 * @n: binary number printed
 */
void print_binary(unsigned long int n)
{
int bit_count = sizeof(n) * 8;
int leading_zeros = 1;
int i;

if (n == 0)
{
_putchar('0');
return;
}

for (i = bit_count - 1; i >= 0; i--)
{
unsigned long int mask = 1UL << i;
if ((n & mask) || !leading_zeros)
{
_putchar((n & mask) ? '1' : '0');
leading_zeros = 0;
}
}
}
