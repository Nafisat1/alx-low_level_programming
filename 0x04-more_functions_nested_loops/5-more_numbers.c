#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * @c: character to be printed
 * @j: character to be computed
 *
 *  Return: Always 0
 */
void more_numbers(void)
{
	char c = 0;
	int j;

	while (c <= 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(c);
			j++;
		}
	_putchar('\n');
	c++;
	}
}
