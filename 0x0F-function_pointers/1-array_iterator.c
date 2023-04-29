#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element in an array
 *
 * @array: the integer array to iterate through
 * @size: the size of the array
 * @action: a pointer to the function to apply to each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
