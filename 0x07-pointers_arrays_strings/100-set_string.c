#include "main.h"

/**
 * set_string - function sets value of a pointer to a char.
 * @s: the pointer to set
 * @to: the pointer to replace s
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
