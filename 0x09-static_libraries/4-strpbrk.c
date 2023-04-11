#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - is a function
 * @s: is a pointer to char
 * @accept: is a pointer to char
 * Return: the value
 */

char *_strpbrk(char *s, char *accept)
{
	int counter;

	while (*s)
	{
		for (; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
