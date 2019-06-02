#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to be used
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index = hash_djb2(key);

	if (key == NULL)
		return (0);
	index = hash_djb2(key) % size;
	return (index);
}
