#include <stdlib.h>
#include "main.h"

/**
 * *create_array - an array var chars created,
 * intiazition with a char
 * @size: type of the array
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (1), NULL (0)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
