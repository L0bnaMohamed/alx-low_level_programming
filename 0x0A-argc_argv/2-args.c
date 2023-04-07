#include <stdio.h>

/**
 * main - is the function
 *
 * @argc: is the string size
 *
 * @argv: is a string
 *  Return: return functin
 */
int main(int argc, char *argv[])
{
	int number_of_argument;

	for (number_of_argument = 0; number_of_argument < argc; number_of_argument++)
	{
		printf("%s\n", argv[number_of_argument]);
	}
	return (0);
}
