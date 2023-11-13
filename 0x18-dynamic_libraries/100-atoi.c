#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: int converted
 */
int _atoi(char *s)
{

int sign = 1;
	unsigned int total = 0;
	char working = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			working = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (working)
			break;
		}
		s++;
	}
	if (sign < 0)
	{
		total = (-(total));
	}
	return (total);
}
