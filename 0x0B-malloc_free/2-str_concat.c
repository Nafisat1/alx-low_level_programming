#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: NULL on failure
 *        Otherwise return the content of s1 followed by
 *        the content of s2 and NULL terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, cat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	cat = malloc(sizeof(char) * len);

	if (cat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		cat[cat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		cat[cat_i++] = s2[i];

	return (cat);
}
