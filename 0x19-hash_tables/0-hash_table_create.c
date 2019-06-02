#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table, or NULL it it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht = malloc(sizeof(hash_table_t));

	if (hasht == NULL)
		return (NULL);
	hasht->array = calloc(size, sizeof(hash_node_t));
	if (hasht->array == NULL)
		return (NULL);
	hasht->size = size;
	return (hasht);
}
