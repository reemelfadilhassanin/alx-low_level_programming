#include "hash_tables.h"

/**
 * hash_table_create - Function that create the hash table.
 * @size: The size of array.
 *
 * Return: Pointer to new one.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_tab;

	hash_tab = malloc(sizeof(hash_table_t));
	if (hash_tab == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);
	hash_tab->size = size;
	hash_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tab->array == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_tab->array[i] = NULL;
	}
	return (hash_tab);
}
