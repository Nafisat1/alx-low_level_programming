#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 *  Return: Always 0
 */
void more_numbers(void)
{
	char a, c;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			c = a;
			if (a > 9)
			{
				_putchar('1');
				c = a % 10;
			}
			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}
}
