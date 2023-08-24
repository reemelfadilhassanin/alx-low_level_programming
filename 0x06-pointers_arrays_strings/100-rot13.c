#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that  encoder rot13
 * @p: pointer to string
 *
 * Return: return point p
 */

char *rot13(char *p)
{
	int x;
	int y;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arryrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; *(p + x) != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (*(p + x) == arr1[y])
			{
				p[x] = arryrot[y];
				break;
			}
		}
	}
	return (p);
}
