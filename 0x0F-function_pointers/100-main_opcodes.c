#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, n;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
	return (2);
	}

	p = (unsigned char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02x", *(p + i));
		if (i == n - 1)
			putchar('\n');
		else
			putchar(' ');
	}

	return (0);
}
