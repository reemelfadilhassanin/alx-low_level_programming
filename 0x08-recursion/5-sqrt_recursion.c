#include"main.h"
int sqrt1(int n, int i);

/**
 * sqrt - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt1(n, 0));
}

/**
 * sqrt1 - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt1(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt1(n, i + 1));
}

