#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: string between numbers
 * @n: number of integers
 * Return: Result or 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
