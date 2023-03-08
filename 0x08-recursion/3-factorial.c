#include "main.h"

/**
 * factorial - returns the factorial of numbers
 * @n: the number
 *
 * Return: Always 0
 *        -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
