#include "main.h"
 /**
  * _strlen - funtction get the length of string
  * @s: the string who check
  * Return: integer length
  */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
 * create_file - Function that creates a file.
 * @filename: A name of file to be created
 * @text_content: A null terminate string
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int f;
ssize_t byte_w, len = _strlen(text_content);

if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (f == -1)
{
return (-1);
}
if (text_content != NULL)
{
byte_w = write(f, text_content,  len);
close(f);
if (byte_w == -1)
{
return (-1);
}
}
close(f);
return (1);
}
