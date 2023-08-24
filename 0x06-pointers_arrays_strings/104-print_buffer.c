#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function to prints buffer
 * @p: pointer of  buffer
 * @n: size
 * Return: void
 */

void print_buffer(char *p, int n)
{
	int o, j, i;

	o = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	while (o < n)
	{
		j = n - o < 10 ? n - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(p + o + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(p + o + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
