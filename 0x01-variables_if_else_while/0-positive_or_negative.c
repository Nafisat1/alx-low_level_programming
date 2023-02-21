#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether the number stored in the variable
 *        n is positive or negative
 *        Return: Always 0
 * /
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
 if (n > 5)
{
printf("the last digit of n is greater than 5/n");}
else if (n = 0)
{
printf(" the last digit of n is 0/n");}
else if (n<6 != 0)
{
printf("the last digit of n is less than 6 and not equal to 0/n");
	return (0);}
}
