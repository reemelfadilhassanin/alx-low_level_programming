#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
	int _isalpha(int c)
	{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (l == c || u == c)
			{
				return (1);
			}
		}
	}
	return (0);
}
