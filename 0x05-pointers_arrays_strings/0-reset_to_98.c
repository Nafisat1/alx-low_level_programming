#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - resets value n to 98
 * @n: integer pointer
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	*n = 402;
	printf("%p\n", n);
	*n = 98;
	printf("%p\n", n);
}
