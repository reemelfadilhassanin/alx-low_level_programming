#include <stdio.h>
#include "main.h"

/**
 * main - print the number of args passed
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
