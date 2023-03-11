#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i;

	int result = 0;

	for (i = 1; i < argc; i++)
	{
	result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
