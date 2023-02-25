#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int c = 0;
	for (c = 0; c <= 9; c++)
		printf("%d", c);
	printf("\n");
}
