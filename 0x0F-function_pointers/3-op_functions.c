#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - prints the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prints the difference of a and b
 * @a: integer to subtract from
 * @b: integer to be subtracted
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prints the product of a and b
 * @a: integer to be multiplied
 * @b: integer to be multiplied
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - prints the result of the division of a by b
 * @a: integer to be divided
 * @b: integer by which first integer will be divided
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - prints the remainder of the division of a by b
 * @a: integer to be divided to find its remainder
 * @b: modulus integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
