#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */


	int _islower(int c)
	{
		char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == c)
		{
			return (1);
		}
	}
	return (0);
}
