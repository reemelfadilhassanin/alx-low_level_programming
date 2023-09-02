#include <stdio.h>

/**
 * main - function to print all arguments being passed
 * @argc: argument numbers
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	for ( ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
