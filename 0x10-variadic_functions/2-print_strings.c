#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: counter number
 * @...: A variable string
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
		printf("%s%s", (str = va_arg(s, char *)) ? str : "(nil)",
		 (i != (n - 1) && separator != NULL) ? separator : "");
	printf("\n");


	va_end(s);
}

