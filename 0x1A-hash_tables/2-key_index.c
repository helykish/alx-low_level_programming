#include "hash_tables.h"

/**
 * key_index - func giving all index
 * according to a present hash
 *
 * @key: key passed
 * @size: all present of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
