#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp_helper-is a function
 * @s1: is a char
 * @s2: is a char
 * Return: return
 */
int wildcmp_helper(const char *s1, const char *s2)
{
	if (*s2 == '*')
	{
		while (*s2 == '*')
		{
			s2++;
		}
	if (*s2 == '\0')
	{
		return (1);
	}
	while (*s1 != '\0')
	{
		if (wildcmp_helper(s1++, s2))
		{
			return (1);
		}
	}
	return (0);
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	else
	{
	return (0);
	}
}
/**
 * wildcmp-is a function
 * @s1:is a char
 * @s2:is a char
 * Return:return
 */
int wildcmp(char *s1, char *s2)
{
	int result;
	size_t n1 = strlen(s1);
	size_t n2 = strlen(s2);
	char s1_end = s1[n1];
	char s2_end = s2[n2];

	s1[n1] = '\0';
	s2[n2] = '\0';

	result = wildcmp_helper(s1, s2);

	s1[n1] = s1_end;
	s2[n2] = s2_end;

	return (result);
}
