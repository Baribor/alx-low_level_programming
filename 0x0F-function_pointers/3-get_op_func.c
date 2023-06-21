#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the function that
 * corresponds to the operator given
 * @s: Operator
 * Return: Pointer to a function else NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].f)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
