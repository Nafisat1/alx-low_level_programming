#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a, b;

	while (a < n && n > 0)
	{
		for (b = 0; b < a;)
	{
		_putchar(' ');
	}
		b++;
	{
		_putchar('\\');
		_putchar('\n');
	}
	a++;
	}
	if (n == 0)
		_putchar('\n');
}
