#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - func searches string for any of byte a set.
 *
 * @s: strng to receive
 * @accept: bytes to accept
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int flag;

	while (*s != '\0')
	{
		flag = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				flag = 1;
			j++;
		}
		j = 0;
		if (flag == 1)
			return (s);
		s++;
	}
	return (NULL);
}
