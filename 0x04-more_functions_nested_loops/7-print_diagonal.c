#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	for (; n > 0; n--)
	{
		_putchar('\\');
	}
		_putchar('\n');
}
