#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number if arguments
 * @argv: strings of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
