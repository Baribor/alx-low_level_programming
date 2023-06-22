#include <stdarg.h>

/**
 * sum_them_all - Sums all its arguments
 * @n: Number of arguments
 * Return: sum  of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    int i;
    va_list args;

    if (n == 0)
        return (0);

    va_start(args, n);

    for (i = 0; i < n; ++i)
    {
        sum += va_arg(args, int);
    }
    va_end(args);

    return (sum);
}
