#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		for (i = 1; i < argc; i++)
		{
			char *argument = argv[i];
			int counter = 0;

			while (argument[counter] != '\0')
			{
				if (!isdigit(argument[counter]))
				{
				printf("Error\n");
				return (1);
				}
				counter++;
			}
			sum += atoi(argument);
			}
			printf("%d\n", sum);
	}
	return (0);
}
