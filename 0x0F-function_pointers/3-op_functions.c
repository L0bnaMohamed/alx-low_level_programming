#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 *
 * @a: first integer to add
 * @b: second integer to add
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 *
 * @a: first integer to subtract from
 * @b: second integer to subtract
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: first integer to multiply
 * @b: second integer to multiply
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 *
 * @a: first integer to divide
 * @b: second integer to divide by
 *
 * Return: the result of the division of a by b
 * if b is 0, print Error, followed by a new
 * line, and exit with the status 100.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 *
 * @a: first integer to divide
 * @b: second integer to divide by
 *
 * Return: the remainder of the division of a by b
 * if b is 0, print Error, followed by a new line,
 * and exit with the status 100.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

