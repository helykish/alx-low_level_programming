#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calc result string length
 * @string: string
 * Return: the string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of second string
 * @s1: first string 
 * @s2: second string 
 * @n: n bytes to concat from second string 
 * Return: pointer to concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* acc 4 NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account 4 -ve n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* acc 4 n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to acc for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* check fr any error */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concatenate */
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
