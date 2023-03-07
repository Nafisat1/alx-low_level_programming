#include "main.h"

/**
<<<<<<< HEAD
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
=======
 * _memcpy - copies memory area
 * @src: memory areato copy from
 * @dest: memory area to copy to
 * @n: number of bytes to be copied 
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
>>>>>>> 5d350ae8fb65ac8c27a73ac8422c7702bae48e66

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
