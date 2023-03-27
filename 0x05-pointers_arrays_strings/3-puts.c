#include "main.h"

/**
 * _puts(char *str)- is the function
 *
 * @str: is a pointer
 *
 * Return: return
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
