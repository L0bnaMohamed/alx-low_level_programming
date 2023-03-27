#include "main.h"

/**
 * print_rev(char *s)- function
 *
 * @s: is a pointer
 *
 * Return: return
 */
void print_rev(char *s)
{
	int i = 0, k, length;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	for (k = length - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
