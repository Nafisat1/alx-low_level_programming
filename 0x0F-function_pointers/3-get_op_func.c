#include "3-calc.h"

/**
 * get_op_func - a pointer to the function that corresponds
 * to the operator given as a parameter
 * @s: the operator passed as argument to the program
 *
 * Return: NULL if s does not match any of the 5 expected operators
 *         otherwise return the operator being pointed at
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

	while (i < 5)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
