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

	for (a = 0; a < n; a++)
	{
		for(b = 0; b < a; b++)
	{
		_putchar(' ');
		_putchar('\\');
	}
		_putchar('\n');
	}
		n--;
}
