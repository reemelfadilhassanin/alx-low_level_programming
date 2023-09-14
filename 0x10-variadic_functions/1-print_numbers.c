#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers with seprator
 * @separator: The string seprator
 * @n: The number of args
 * @...: integer numbers to be printed.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

			printf("%s", (i != (n - 1) && separator != NULL) ? separator :  "");
	}

	printf("\n");

	va_end(args);
}
