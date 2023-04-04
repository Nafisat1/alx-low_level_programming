#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3;
	int count;

	for (count = 0; count <= 50; count++)
	{
		n3 = n1 + n2;
		printf("%d", n3);
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
