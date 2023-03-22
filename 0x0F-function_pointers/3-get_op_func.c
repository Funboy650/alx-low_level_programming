#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: sum of @a and @b
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
