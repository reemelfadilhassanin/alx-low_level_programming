#include <unistd.h>
/**
 * _putchar - write  c to stdout
 * @c: To print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
