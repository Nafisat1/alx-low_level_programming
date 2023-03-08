#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: the value to be raised
 * @y: the power
 *
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	else if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
