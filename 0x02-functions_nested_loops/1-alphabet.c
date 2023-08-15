#include "main.h"
  
/**
 * main - Entry point
 * 
 * Description: 'print_alphabet - print all alphabet in lowercase'
 *
 * 
 * Return: Always 0 (Success)
 */

	void print_alphabet(void)
	{
		char l;


		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);


		_putchar('\n');
	}

