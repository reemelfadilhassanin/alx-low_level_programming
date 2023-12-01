#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key of the hash we r looking for
 * Return: value associated with the element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmpe;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	tmpe = ht->array[idx];

	while (tmpe != NULL)
	{
		if (strcmp(tmpe->key, key) == 0)
			return (tmpe->value);
		tmpe = tmpe->next;
	}

	return (NULL);
}
