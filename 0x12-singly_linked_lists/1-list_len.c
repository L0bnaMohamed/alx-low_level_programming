#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function to get length
 *
 * @h: Pointer to the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
