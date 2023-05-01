#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a `listint_t` linked list
 *               and returns its data.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 *
 * Return: The data stored in the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
