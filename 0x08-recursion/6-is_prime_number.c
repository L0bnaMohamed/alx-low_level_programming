#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime
 *
 * @n: Number to check
 * @i: Divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 2));
	}
}

/**
 * is_prime_number - Check if a number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}
	else if (n <= 1 || n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 3));
	}
}
