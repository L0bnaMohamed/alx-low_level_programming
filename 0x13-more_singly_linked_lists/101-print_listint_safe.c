#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Prints a listint_t linked list safely
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *loop_node = NULL;

	while (curr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *) curr, curr->n);

		if (curr > curr->next)
			loop_node = curr->next;

		curr = curr->next;

		if (loop_node != NULL && curr == loop_node)
		{
			printf("-> [%p] %d\n", (void *) loop_node, loop_node->n);
			exit(98);
		}
	}

	return (count);
}
