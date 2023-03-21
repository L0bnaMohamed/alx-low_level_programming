#include "main.h"

/**
 * _islower(int c)- is a function print 1 when the character is
 * lower case and print 0 when the character is giher case
 *@c: is a character wiith ASCII code
 * Return: return 0 (successful)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
