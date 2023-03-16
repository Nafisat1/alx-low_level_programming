#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of array to be created
 * @c: character
 *
 * Return: a pointer to the array, or NULL if it fails
 *         Null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return ('\0');
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
