#include "lists.h"

/**
 * list_len - lists the number of elements in list_t list
 * @h: linked list
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count =0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
