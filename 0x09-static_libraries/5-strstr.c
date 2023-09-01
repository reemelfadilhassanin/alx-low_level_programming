#include "main.h"
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y = 0;

	while (needle[y] != '\0')
		y++;

	while (*haystack)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[x] != needle[x])
				break;
		}
		if (x != y)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
