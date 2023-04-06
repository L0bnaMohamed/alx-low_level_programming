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
	int sqrtt = 0;

	sqrtt = sqrt(n);
	if (sqrtt * sqrtt == n)
	{
		return (sqrtt);
	}
	else
		return (-1);
}
