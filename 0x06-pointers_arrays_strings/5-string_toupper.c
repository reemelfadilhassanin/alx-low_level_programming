#include "main.h"
/**
 * string_toupper - change all lowercase of string to uppercase
 * @str: pointer of string will check to lowercase
 *
 * Return:string str where all in uppercase
 */
char *string_toupper(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
