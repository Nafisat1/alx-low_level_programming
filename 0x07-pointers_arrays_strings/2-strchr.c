#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
<<<<<<< HEAD
 * @s: string where character is located
=======
 * @s: location of character
>>>>>>> 5d350ae8fb65ac8c27a73ac8422c7702bae48e66
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence of the character c
 *         NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
<<<<<<< HEAD
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
=======
        while (*s)
        {
                if (*s != c)
                        s++;
                else
                        return (s);
        }
        if (c == '\0')
                return (s);

        return (NULL);
>>>>>>> 5d350ae8fb65ac8c27a73ac8422c7702bae48e66
}
