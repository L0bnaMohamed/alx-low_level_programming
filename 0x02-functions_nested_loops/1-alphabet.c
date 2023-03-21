#include "main.h"

/**
 *print_alphabet - a function return the laower case alphabet
 *
 *Return:return 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
