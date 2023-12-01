#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - This function dds an element to the hash table
 * @ht: The hash table to add or update
 * @key: The key of the new element not be an empty string
 * @value: The value (not be an empty string) of the new element
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_hash = NULL;
	hash_node_t *tmpe = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	tmpe = ht->array[idx];

	while (tmpe && strcmp(tmpe->key, key) != 0)
		tmpe = tmpe->next;
	if (tmpe)
	{
		free(tmpe->value);
		tmpe->value = strdup(value);
		return (1);
	}

	/* check if key not found then add new node*/

	new_hash = malloc(sizeof(*new_hash));
	if (!new_hash)
		return (0);

	new_hash->key = strdup(key);
	new_hash->value = strdup(value);

	new_hash->next = ht->array[idx];
	ht->array[idx] = new_hash;

	return (1);
}
