#include "main.h"

/**
 * _strncat- is a function
 * @dest: is a pointer to char
 * @src: is a pointer to a char
 * @n : is an integer
 * Return: return the value
 */
char *_strncat(char *dest, char *src, int n)
{
	int cou1 = 0;
	int cou2 = 0;

	while (dest[cou1] != '\0')
		cou1++;

	while (src[cou2] != '\0' && cou2 < n)
	{
		dest[cou1] = src[cou2];
		cou2++;
		cou1++;
	}

	dest[cou1] = '\0';

	return (dest);
}
