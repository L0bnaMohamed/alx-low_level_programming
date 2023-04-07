#include <stdio.h>

/**
 * main - is the function
 * __attribute__((unused))-function used to ignore
 * usage of the variable
 * @argc: is the string size
 *
 * @argv: is a string
 *  Return: return 0 success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
