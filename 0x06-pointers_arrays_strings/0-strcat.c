#include "main.h"

/**
 * _strcat - concanetes two strings
 * @dest: string 1
 * @src: string 2
 * Description - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 *  and then adds a terminating null byte.
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
