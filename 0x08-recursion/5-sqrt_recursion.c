#include <math.h>
#include "main.h"

/**
 * fun- is a function
 * @n: is an integer
 * @i: is an integer
 * Return: return
 */
int fun(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (fun(n, i + 1));
	}
}
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
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (fun(n, 1));
	}
}
