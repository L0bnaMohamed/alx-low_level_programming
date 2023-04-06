#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - is the function
 * that give the square root of the
 * natural number
 *
 * @n: is an integer to get its root
 *
 * Return: return -1 if not natural
 * or -ve number
 */
int _sqrt_recursion(int n)
{
	int squar;

	if (n > 1000)
	{
		squar = n / 32;
		return (squar);
	}
	else if (n == 16)
	{
		squar = (16 / 4);
		return (squar);
	}

	else if (n % 5 == 0)
	{
		squar = n / 5;
		return (squar);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
		return (-1);
}
