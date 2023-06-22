#include <stdio.h>
#include <stdarg.h>

/**
 * is_printable_char - Checks if a char is a format specifier
 * @c: Character to check
 * Return: 1 if true else 0
 */
int is_printable_char(char c)
{
	return (c == 'c' || c == 'i' || c == 'f' || c == 's');
}

/**
 * is_printable_available - Check if format specifier is ahead.
 * @s: Format specifiers
 * @i: Current index
 * Return: 1 if true else 0
 */
int is_printable_available(const char *s, int i)
{
	while (s[i])
	{
		if (is_printable_char(s[i]))
			return (1);
		i++;
	}

	return (0);
}

/**
 * print_all - Function that prints anything
 * @format: List of type of arguments passed
 * Return: Void
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *s;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			s = va_arg(args, char *);
			printf("%s", s ? s : "(nil)");
			break;
		default:
			break;
		}
		if (is_printable_char(format[i]) && is_printable_available(format, i + 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
