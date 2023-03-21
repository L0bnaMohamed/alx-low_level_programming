#include "main.h"

/**
 * print_last_digit(int)- it is the function
 * used to print the last no. of the digit
 * @i: is an integer
 * Return: return (success)
 */
int print_last_digit(int i)
{
	int n = i % 10;

	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
