#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node- is the function
 * @list_t : is a pointer
 * @str : is a pointer to char
 * Return : return
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_copy = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
	return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str_copy == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
