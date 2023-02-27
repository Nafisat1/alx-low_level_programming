#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; len < *s; len++)
	{
		s++;
	}
	return (len);
}
