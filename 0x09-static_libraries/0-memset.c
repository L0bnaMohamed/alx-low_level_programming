#include "main.h"

/**
 * _memset - id the function
 * @s: is a pointer
 * @b: is a character
 * @n: is an integer
 * Return: return the value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
