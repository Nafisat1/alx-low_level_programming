#include<stdio.h>

/**
 * main - Prints the size of various types on the computer
 *      it is compiled and run on.
 *
 *      Return: Always 0
 */
int main(void)
{
 printf("size of a char:%2d byte(s)\n", sizeof(char));
 printf("size of an int:%2d byte(s)\n", sizeof(int));
 printf("size of a long int:%2d byte(s)\n", sizeof(long int));
 printf("size of a long long int:%2d byte(s)\n", sizeof(long long int));
 printf("size of a float:%2d byte(s)\n", sizeof(float));
 return (0);
}


