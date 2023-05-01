#include "lists.h"

/**
 * sum_listint- is a function
 * @haed: is a variable
 * Return: return the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
