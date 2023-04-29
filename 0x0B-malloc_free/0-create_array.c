#include <stdlib.h>
#include "main.h"

/**
 * *create_array- is a function
 * @size: is an integer
 * @c : is a char
 * Return: return
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
	{
	return (NULL);
	}
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
