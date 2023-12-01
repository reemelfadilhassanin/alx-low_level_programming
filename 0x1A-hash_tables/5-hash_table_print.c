#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table to be printed.
 *
 * Return: No return.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *t_node;
	unsigned long int i = 0, n = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = n; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			t_node = ht->array[i];
			while (t_node)
			{
				printf("%s'%s': '%s'", n == 0 ? "" : ", ",
					   t_node->key, t_node->value),
					n++;
				t_node = t_node->next;
			}
		}
	}
	printf("}\n");
}
