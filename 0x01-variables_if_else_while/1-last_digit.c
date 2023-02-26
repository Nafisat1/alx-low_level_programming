#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the number stored in variable n
 * @n: is a variable
 * @m: is the last digit of the number in variable n
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of int *n is %m and is greater than 5\n");
	else if (m == 0)
		printf("Last digit of int *n is %m and is 0\n");
	else
		printf("Last digit of int *n is %m and is less than 6 and not 0\n");

	return (0);
}
