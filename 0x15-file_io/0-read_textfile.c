#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to read
 * @letters: number of bytes to be read
 * Return: the printed bytes ,0- otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int f;
	ssize_t byte_read;
	ssize_t byte_write;

if (filename == NULL)
{
	return (0);
}
f = open(filename, O_RDONLY);
if (f == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(f);
return (0);
}
byte_read = read(f, buffer, letters);
if (byte_read == -1)
{
free(buffer);
close(f);
return (0);
}
byte_write = write(STDOUT_FILENO, buffer, byte_read);
free(buffer);
close(f);
if (byte_write == -1 || byte_write != byte_read)
{
return (0);
}
return (byte_write);
}
