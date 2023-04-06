#include "main.h"

/**
 * factorial =- the function return the factorial
 * @n: is an integer
 * Return: return the result
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	       return (-1);	
}
