#include "function_pointers.h"

/**
 * array_iterator - iterates through an array of integers
 * @size: the size of the array
 * @action: pointer to a function
 * @array: array to iterate
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)

	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
