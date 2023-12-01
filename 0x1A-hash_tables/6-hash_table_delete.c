#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 *
 * @ht: is the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *test1;
	hash_node_t *test2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		test1 = ht->array[i];
		while ((test2 = test1) != NULL)
		{
			test1 = test1->next;
			free(test2->key);
			free(test2->value);
			free(test2);
		}
	}
	free(ht->array);
	free(ht);
}
