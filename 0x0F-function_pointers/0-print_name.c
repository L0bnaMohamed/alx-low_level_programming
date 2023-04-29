#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name-is a funcyion
 * @name: is a char
 * @f: is a void
 * Return : return
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
