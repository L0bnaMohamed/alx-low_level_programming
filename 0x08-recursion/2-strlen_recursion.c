#include "main.h"
#include <string.h>

/**
 * _strlen_recursion(char *s) - is a function to return
 * the length of the string
 * @s: is a pointer
 * Return: return the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = strlen(s);
	}
	return (i);
}
