#include "main.h"

/**
 * _isalpha(int c)- is a function check is the input alphabet or no
 * @c: is a character written by ASCII code
 * Return: return 1 if it is character , print 0 if it is not a character
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
