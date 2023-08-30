#include "lists.h"
/**
 * get_nodeint_at_index - search node in a linked list
 * @head : pointer to head of linked list
 * @index: node index to find (starting at 0)
 * Return: pointer to select node,
 *         or NULL - if the node don't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t n;

for (n = 0; (n < index) && (head->next); n++)
head = head->next;

if (n < index)
return (NULL);

return (head);
}
