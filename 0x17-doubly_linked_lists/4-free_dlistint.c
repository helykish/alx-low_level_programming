#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: check of the list
 * Return: void return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
