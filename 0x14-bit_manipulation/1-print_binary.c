#include "main.h"

/**
 * print_binary - function that prints the binarynumber
 * @n: binary number printed
 */
void print_binary(unsigned long int n)
{
int count = sizeof(n) * 8;
int i;

for (i = count - 1; i >= 0; i--)
{
unsigned long int x = 1UL << i;
_putchar((n & x) ? '1' : '0');
}
_putchar('\n');
}
