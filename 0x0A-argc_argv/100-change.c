#include <stdio.h>
#include <stdlib.h>

/**
 * main -is a function
 * @argc: is an integer
 * @argv: is a string
 * Return: return
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
