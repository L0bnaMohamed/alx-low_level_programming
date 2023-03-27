#include "main.h"

/**
 * swap_int(int *a, int *b)- The function
 *
 * @a: is a pointer
 *
 * @b: is a pointer
 *
 * Return : return
 */
void swap_int(int *a, int *b)
{
	int exch;

	exch = *a;
	*a = *b;
	*b = exch;
}
