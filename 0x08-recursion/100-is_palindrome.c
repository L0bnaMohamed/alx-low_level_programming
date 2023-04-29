#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}

/**
 * _check_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * @start: The start index of the current comparison
 * @end: The end index of the current comparison
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
	return (0);
	}
	return (_check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_check_palindrome(s, 0, len - 1));
}
