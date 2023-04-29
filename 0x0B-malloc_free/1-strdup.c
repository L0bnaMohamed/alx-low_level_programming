#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup- is a function
 * @str: is a char
 * Return: return
 */
char *_strdup(char *str)
{
	char *copy = (char *) malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
