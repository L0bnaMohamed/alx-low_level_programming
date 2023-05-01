#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	curr = *head;
	prev = NULL;
	for (i = 0; i < index && curr != NULL; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
	{
		return (-1);
	}
	if (prev == NULL)
	{
		*head = curr->next;
	}
	else
	{
		prev->next = curr->next;
	}
	free(curr);
	return (1);
}
