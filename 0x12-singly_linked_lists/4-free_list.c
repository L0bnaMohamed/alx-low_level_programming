#include <stdlib.h>
#include "lists.h"

/**
 * free_list-function
 * @list_t:is a pointer
 * Retun:return
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
