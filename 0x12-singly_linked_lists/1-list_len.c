#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list
 *
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
