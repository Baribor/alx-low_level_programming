#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function that print numbers
 * @separator: Number seperator
 * @n: How many numbers to print
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
			printf("%s", separator ? separator : "");
	}
	printf("\n");
	va_end(args);
}
