#include "main.h"

/**
 * _strchr - is the function
 * @dest : is a pointer to char
 * @src : is a pointer to char
 * Return: return the value
 */
char *_strcat(char *dest, char *src)
{
	int cou1 = 0;
	int cou2 = 0;

	if (dest[cou1] != '\0')
	{
		cou1++;
	}

	else if (src[cou2] != '\0')
	{
		dest[cou2] = src[cou2];
		cou2++;
		cou1++;
	}

	dest[cou2] = '\0';

	return (dest);
}
