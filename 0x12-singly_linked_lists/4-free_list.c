#include "lists.h"

/**
 * free_list - function that frees  a list
 * @head: linked list head.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
