#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr- is a function
 * @ac:is an int
 * @av:is a char
 * Return: return
 */
char *argstostr(int ac, char **av)
{
	int i, pos = 0, total_length = 0;
	char *result = (char *) malloc(sizeof(char) * total_length);

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(result + pos, av[i]);
		pos += strlen(av[i]);
		result[pos++] = '\n';
	}
	result[total_length - 1] = '\0';
	return (result);
}

