#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that print strings
 * @separator: Separator between the strings
 * @n: Number of strings
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		s = va_arg(args, char *);
		printf("%s", s ? s : "(nil)");

		if (i < n - 1)
			printf("%s", separator ? separator : "");
	}
	printf("\n");
	va_end(args);
}
