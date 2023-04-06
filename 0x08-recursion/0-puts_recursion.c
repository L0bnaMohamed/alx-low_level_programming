#include "main.h"

/**
 * _puts_recursion(char *s)- is a function to
 * to print a string
 * @s: is a pointer
 * Return: return 0 means (Success)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
