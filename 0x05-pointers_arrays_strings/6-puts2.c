#include "main.h"

/**
 * puts2(char *str)- is the function
 * @str: is a pointer
 */
void puts2(char *str)
{
	int i = 0, len, k;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i - 1;
	for (k = 0; k <= len ; k++)
	{
		if (str[k] % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
