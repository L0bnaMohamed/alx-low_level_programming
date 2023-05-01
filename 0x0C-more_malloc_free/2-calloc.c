#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL if malloc fails or if nmemb
 *         or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *cptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	cptr = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		*(cptr + i) = 0;
	}

	return (ptr);
}
