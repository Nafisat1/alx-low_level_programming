#include "main.h"

/**
 * print_last_digit: Returns the value of the last digit
 *@n: input number

 * Return: Always 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
	_putchar(-l + 48);
	return (-l);
	}
	else
	{
		-putchar(l + 48);
		return (l);
	}
}		
