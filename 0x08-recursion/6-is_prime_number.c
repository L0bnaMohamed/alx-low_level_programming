#include "main.h"

/**
 * is_prime_number - Check if a number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 3;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		while (i * i <= n)
		{
			if (n % i == 0)
			{
				return (0);
			}
			i += 2;
		}
		return (1);
	}
}
