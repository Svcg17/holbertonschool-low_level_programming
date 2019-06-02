#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be used
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned int i = 0;
	hash_node_t *t;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					t = temp->next;
					free(temp->key);
					free(temp->value);
					free(temp);
					temp = t;
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
