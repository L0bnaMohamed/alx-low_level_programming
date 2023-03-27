#include "main.h"

/**
 * rev_string(char *s)- function
 *
 * @s: is a pointer
 *
 * Return: return
 */
void rev_string(char *s)
{
	int i = 0, k, length=0;
	char container;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	for (k = 0; k > length / 2; k++)
	{
		container = s[k];
		s[k] = s[length];
		s[length--] = container;
	}
}
