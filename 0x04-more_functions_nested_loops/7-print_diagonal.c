#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a = 0, b;

	while (a < n && n > 0)
	{
		b = 0;
		while (b < a)
	{
		_putchar(' ');
		b++;
	}

		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
