#include "main.h"
/**
 * leet - function that  encode into 1337speak
 * @a: pointer
 * Return: return a  value
 */
char *leet(char *a)
{
	int x, y;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (x = 0; *(a + x) != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (a[x] == arr1[y])
			{
				a[x] = arr2[y];
			}
		}
	}
	return (a);
}
