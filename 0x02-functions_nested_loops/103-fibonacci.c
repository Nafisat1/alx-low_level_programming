#include<stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms < 4,000,000,
 *        followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{

	int n1 = 0, n2 = 1, next = 0, sum = 0;

	while (next < 4000000)
	{
	next = n1 + n2;
	n1 = n2;
	n2 = next;
	if (next % 2 == 0)
	sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
