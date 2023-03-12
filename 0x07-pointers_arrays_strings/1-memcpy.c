#include "main.h"

/**
<<<<<<< HEAD
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source to copy from
 * @n: length of src
=======
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
>>>>>>> 1427087f0d0a15f3169434f41b0b3ccaa088cc18
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
