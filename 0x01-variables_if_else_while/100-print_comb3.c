#include <stdio.h>

/**
 * main- is the main function
 * Return: is the return
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 8 && j == 9)
			{
				printf("%d%d\n", i, j);
				break;
			}
			else if (i == 0 && j == 0)
			{
			}
			else if (i == j)
			{
			}
			else if (i < j)
			{
				printf("%d%d", i, j);
				putchar(',');
				putchar(' ');
			}
		}
	}
		return (0);
}
