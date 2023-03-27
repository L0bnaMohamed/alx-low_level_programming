#include "main.h"

/**
 * _strlen(char *s)- A function
 *
 * @s: is a pointer
 *
 * Return: return
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}

	return (length);
}
