#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ah = 'a';
	while (ah <= 'z')
	{
		putchar(ah);
		ah++;
	}
	putchar('\n');
	return (0);
}
