#include <stdio.h>

/**
 * main -  computes and prints the sum of all the multiples of 3 or 5
 *         below 10
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	while(i < 10)
	{
	if (i % 3 == 0 && i % 5 == 0)
		printf("%d", i);
	i++;
	}
}
