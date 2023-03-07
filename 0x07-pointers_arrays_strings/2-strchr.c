#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: location of character
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence of the character c
 *         NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
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
}
