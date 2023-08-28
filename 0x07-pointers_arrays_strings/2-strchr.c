#include "main.h"
/**
 * _strchr - A  function that locates a character in a string.
 * @s: pointer to null terminted string
 * @c: specifies the character to be searched
 * Return: 0(Success)
 */
char *_strchr(char *s, char c)
{
do {
if  (*s == c)
return (s);
} while (*s++);
return (0);
}
