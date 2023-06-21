#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    int (*f)(int, int);
    int result;

    if (argc != 4)
        return (-1);

    f = get_op_func(argv[2]);
    result = f(atoi(argv[1]), atoi(argv[3]));
    printf("%d\n", result);
    return (0);
}
