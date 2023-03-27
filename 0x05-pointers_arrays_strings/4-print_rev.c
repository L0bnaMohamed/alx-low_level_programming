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
	int i;

	for (i = 63; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
