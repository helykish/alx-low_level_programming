#include "main.h"
#include <stdio.h>

/**
 * _strchr - func locates a character in a string.
 *
 * @s: receive and return string
 * @c: char to receive
 * Return: char value
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
