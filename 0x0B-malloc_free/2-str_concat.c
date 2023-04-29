#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat-is a function
 * @s1:is a char
 * @s2:is a char
 * Return:return
 */
char *str_concat(char *s1, char *s2)
{
	size_t size1 = strlen(s1);
	size_t size2 = strlen(s2);
	char *result = (char *) malloc((size1 + size2 + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
