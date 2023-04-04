#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, n3, count;

	for (count = 0; count <= 50; count++)
	{
		n3 = n1 + n2;
		printf("%ld", n3);
		if (count != 49)
		{
			printf(", ");
		}
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
