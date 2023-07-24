#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: evaluate string 
 *
 * Return: return length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
