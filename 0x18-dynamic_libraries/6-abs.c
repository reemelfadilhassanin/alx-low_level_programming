#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{  
	int x;

	x = n;
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	return (0);
}
