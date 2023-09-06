#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * @str: argument for array
 * Return: Always 0.
 */
char *_strdup(char *str)
{
int i, len;
char *x;

if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)

x = (char *)malloc((len + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
x[i] = str[i];
x[i] = '\0';
return (x);
}
