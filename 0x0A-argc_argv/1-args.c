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
	argv[argc] = '\0';

	printf("%d\n", argc - 1);
	return (0);
}
