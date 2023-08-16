#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: array to search in
 * @size: array size
 * @cmp: comparing function pointer
 *
 * Return: index of the 1st element for which
 * the cmp func don't return 0, or -1 if no match is found
 * or size is -ve
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
