#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (*argv[2] == '+')
		result = op_add(num1, num2);
	else if (*argv[2] == '-')
		result = op_sub(num1, num2);
	else if (*argv[2] == '*')
		result = op_mul(num1, num2);
	else if (*argv[2] == '/')
		result = op_div(num1, num2);
	else if (*argv[2] == '%')
		result = op_mod(num1, num2);
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
