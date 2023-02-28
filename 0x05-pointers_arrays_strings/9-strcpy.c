#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @scr: string pointer
 * @dest: buffer pointer
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
