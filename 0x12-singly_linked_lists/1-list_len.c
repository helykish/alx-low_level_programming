#include "lists.h"
/**
 * list_len - returns number lists elements.
 * @h: singly linked list.
 * Return: lists elements number.
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
