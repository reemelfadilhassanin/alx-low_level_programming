#include "main.h"

/**
 * main - print _putchar
 *
 * Description: Print all alphabet in lowercase
 * Return: 0
 */

	void print_alphabet(void)
	{
		char l;


		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);


		_putchar('\n');
	}

