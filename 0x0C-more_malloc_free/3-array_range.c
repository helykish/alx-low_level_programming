#include <stdlib.h>
#include "main.h"
/**
  *array_range - an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: newly created array.
  *NULL  malloc fails.
  *NULL min > max.
  */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
