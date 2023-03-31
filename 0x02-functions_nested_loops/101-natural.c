#include <stdio.h>

/**
 * main- is the function
 * Return: return
 */
int main(void)
{
	unsigned long int sum_of_3_and_5;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum_of_3_and_5 += i;
		}
	}
		printf("%lu\n", sum_of_3_and_5);
		return (0);
}
