#include<stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	       if (ch != 'q' && ch != 'e')
	       putchar(ch);
	return (0);
}
