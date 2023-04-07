#include "main.h"

/**
 * _print_rev_recursion - is the function that print
 * the rev of the string
 * @s: is a pointer
 * Return: return function
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
	_putchar('\n');
	return;
	}
}
