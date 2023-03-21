#include <main.h>

/**
 * main - Entry point
 * Descrioptin: program that prints _putchar
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int putch[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (int i = 0; i < 8; i++)
	{
	_putchar(putch[i]);
	}
	_putchar('\n');
	return (0);
}
