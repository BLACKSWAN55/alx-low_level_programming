#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform
 * The operationasked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter
 */
int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"_", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
