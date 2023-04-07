#include <stdio.h>
#include <stdlib.h>

/**
 * main - function print the multiplication
 * of two numbers
 * @argc: is an integer contains the size
 * of the strings+$
 * @argv: is a string
 * Return:return 0 success
 */
int main(int argc, char *argv[])
{
	int mult, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
