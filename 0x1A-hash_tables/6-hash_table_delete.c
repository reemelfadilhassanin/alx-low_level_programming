#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 *
 * @ht: is the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				temp = ht->array[i];
				free(temp->key);
				free(temp->value);
				ht->array[i] = ht->array[i]->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
