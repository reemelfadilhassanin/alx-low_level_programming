#include"main.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: segment to be scanned
 * @accept: pointer contain character to match
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		break;
	}
	}
	if (!(accept[j]))
	{
		break;
	}
}
return (i);
}
