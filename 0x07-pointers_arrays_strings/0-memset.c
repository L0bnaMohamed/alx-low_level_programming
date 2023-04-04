#include "main.h"

/**
 * _memset(char *s, char b, unsigned int n)-function that fill
 * the memory with a constant byte
 * @s: is pointer
 * @b: is a character
 * @n: is an integer
 * Return:return the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int number;

	for (number = 0; number < n; number++)
	{
		s[number] = b;
	}
	return (s);
}
