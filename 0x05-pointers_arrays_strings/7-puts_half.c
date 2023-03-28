#include "main.h"

/**
 * puts_half(char *str)-is the ufnction
 * @str: is a pointer
 */
void puts_half(char *str)
{
	int i = 0, len, k, n;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	n = (len / 2);
	for (k = n + 1; k <= len ; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
