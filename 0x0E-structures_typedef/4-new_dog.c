#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: the buffer storing the string copy.
 * @src: the source of the string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	bingo->name = _strcpy(bingo->name, name);
	bingo->age = age;
	bingo->owner = _strcpy(bingo->owner, owner);

	return (bingo);
}
