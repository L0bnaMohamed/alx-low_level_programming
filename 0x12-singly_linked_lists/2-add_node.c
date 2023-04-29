#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head node of the list_t list.
 * @str: The string to be inserted into the new node.
 *
 * Return: If successful - Address of the new element.
 *         Otherwise - NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
