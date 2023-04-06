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
	int squareRoot;

	squareRoot = sqrt(n);
	if (squareRoot * squareRoot == n)
	{
		return (squareRoot);
	}
	else
	{
		return (-1);
	}
}
