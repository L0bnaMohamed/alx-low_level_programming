#include "main.h"

/**
 * _strcpy- is a function
 * @dest: is a pointer to char
 * @src: is a pointer to char
 * Return:return the value
 */
char *_strcpy(char *dest, char *src)
{
	int counter;

	for (; src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	dest[counter] = '\0';
	return (dest);
}
