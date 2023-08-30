#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calc total sum of data (n) of a linked list
 * @head : pointer to head of the list
 * Return: sum of the data (n),
 *         or 0 - if the list empty
 */
int sum_listint(listint_t *head)
{
int add;

add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
