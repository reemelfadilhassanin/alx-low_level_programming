#include "main.h"
#include "stdio.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int x = 0;

	do {
		_putchar(x + 48);
		x++;
	} while (x >= 0 && x <= 9);
	 _putchar('\n');
}
