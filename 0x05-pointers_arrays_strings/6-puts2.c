#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int x = 0;
	int i = 0;
	char *y = str;
	int l;

	while (*y != '\0')
	{
		y++;
		x++;
	}
	i = x - 1;
	for (l = 0 ; l <= t ; l++)
	{
		if (l % 2 == 0)
	{
		_putchar(str[l]);
	}
	}
	_putchar('\n');
}
