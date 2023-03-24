#include "function_pointers.h"

/**
 * int_index -  returns the index of the first element for which the
 *cmp function does not return 0
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: array of elements to be searched
 *
 * Return: -1 if no element matches and if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	}

	return (-1);
}
