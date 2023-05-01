#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node of the list,
 * or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (i < index && current)
	{
		current = current->next;
		i++;
	}
	if (i < index || !current)
	{
		return (NULL);
	}
	return (current);
}
