#include "main.h"

/**
 * print_sign(int n)- is a function check is the input alphabet or no
 * @n: is an integer
 * Return: return 1 if it is +ve , print 0 if it is 0 and print -1 if it is -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
