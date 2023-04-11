#include "main.h"

/**
 * _puts - is a function
 *
 * @s: is a pointer to char
 *
 *  Return: Always 0 (Success)
 */

void _puts(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
