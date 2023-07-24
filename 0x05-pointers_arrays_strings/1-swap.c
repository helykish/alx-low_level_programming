#include "main.h"

/**
 * swap_int - swaps values of a and b
 * @a: values pointer 1 
 * @b: values pointer 2
 * Return; nothing 
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
