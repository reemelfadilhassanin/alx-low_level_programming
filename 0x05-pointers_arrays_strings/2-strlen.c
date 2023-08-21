#include "main.h"
/**
 * _strlen - returns the len of a string
 * @s: string of input
 * Return: length of string
 */
int _strlen(char *s)
{

int i;

for (i = 0; *s != '\0'; s++)
	i++;

return (i);
}
