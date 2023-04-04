#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
