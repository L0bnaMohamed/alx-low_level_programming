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
	int low = 0, high = n / 2, mid;

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
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (mid * mid == n)
			{
				return (mid);
			}
			else if (mid * mid < n)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
		return (-1);
	}
}
