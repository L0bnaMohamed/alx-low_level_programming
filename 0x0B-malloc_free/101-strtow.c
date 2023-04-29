#include <stdlib.h>
#include <string.h>
#include "main.h"
#define MAX_WORDS 100

/**
 * strtow- is the function
 * @str: is a char
 * Return : return
 */
char **strtow(char *str)
{
	char **words = malloc((MAX_WORDS + 1) * sizeof(char *)), *end;
	int i = 0, j, len;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	if (words == NULL)
	{
		return (NULL);
	}
	while (*str != '\0' && i < MAX_WORDS)
	{
		while (*str == ' ')
		{
			str++;
		}
		if (*str == '\0')
		{
			break;
		}
		end = str;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
	len = end - str;
	words[i] = malloc((len + 1) * sizeof(char));
	if (words[i] == NULL)
	{
	for (j = i - 1; j >= 0; j--)
	{
		free(words[j]);
	}
	free(words);
	return (NULL);
	}
	strncpy(words[i], str, len);
	words[i][len] = '\0';
	i++;
	str = end;
	}
	words[i] = NULL;
	return (words);
}
