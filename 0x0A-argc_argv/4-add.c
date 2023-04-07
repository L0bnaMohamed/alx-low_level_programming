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
	int sum, i;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 2; i < argc; i++)
	{
	if (atoi(argv[i]) > 0)
	{
		sum += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	}
	return (0);
}
