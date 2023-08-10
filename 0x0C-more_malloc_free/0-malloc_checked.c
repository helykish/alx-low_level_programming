#include <stdlib.h>
/**
  * malloc_checked - Returns a pointer to the allocated memory.
  * @b: allocated memory size.
  *
  * Return: allocated memory poninetr.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
