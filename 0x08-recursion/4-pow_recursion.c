#include "main.h"

/**
 * _pow_recursion - Compute the value of x raised to the power of y
 *
 * @x: Base value
 * @y: Exponent value
 *
 * Return: x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	int temp;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		temp = _pow_recursion(x, y / 2);
		return (temp * temp);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
