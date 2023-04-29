#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
	int  word_index = 0, i, j, word_len, num_words = 1;
	char *word_start = str;
	char **words = malloc((num_words + 1) * sizeof(char *));

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}
       for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			num_words++;
		}
	}
    
	if (words == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			word_len = &str[i] - word_start;
			words[word_index] = malloc((word_len + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
				{
				free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], word_start, word_len);
			words[word_index][word_len] = '\0';
			word_index++;
			word_start = &str[i + 1];
		}
	}

	word_len = &str[strlen(str)] - word_start;
	words[word_index] = malloc((word_len + 1) * sizeof(char));
	if (words[word_index] == NULL) {
	for (j = 0; j <= word_index; j++)
	{
		free(words[j]);
	}
	free(words);
	return (NULL);
	}
	strncpy(words[word_index], word_start, word_len);
	words[word_index][word_len] = '\0';

	words[num_words] = NULL;

	return (words);
}
