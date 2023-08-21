#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string input
 * return: 0
 */
void print_rev(char *s)
{
	int x = 0;
	int y;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (y = x; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
