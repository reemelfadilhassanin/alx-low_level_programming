#include "hash_tables.h"

/**
 * shash_table_create - function to creates a shash table
 *
 * @size: size of the shash table
 * Return: the created shash table, otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tab;
	shash_node_t **array;
	unsigned long int i;

	tab = malloc(sizeof(shash_table_t));
	if (tab == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	tab->array = array;
	tab->size = size;
	tab->shead = NULL;
	tab->stail = NULL;

	return (tab);
}

/**
 * add_n_shash - function to adds node at shash
 *
 * @h: head of the shash linked list
 * @key: pointer to key of the shash
 * @value: pointer to value to store
 * Return: return new node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *node;

	node = *h;

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (node);
		}
		node = node->next;
	}

	node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *h;

	*h = node;

	return (node);
}

/**
 * add_i_shash - function to adds a node on the DLL
 *
 * @ht: pointer to the hash table
 * @new: new node to add of hash table
 * Return: no return
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *t1, *t2;
	int ret;

	t1 = t2 = ht->shead;

	while (t1 != NULL)
	{
		ret = strcmp(new->key, t1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = t1->sprev;

			if (t1->sprev)
				t1->sprev->snext = new;
			else
				ht->shead = new;

			t1->sprev = new;
			new->snext = t1;

			return;
		}
		t2 = t1;
		t1 = t1->snext;
	}

	new->sprev = t2;
	new->snext = NULL;

	if (ht->shead)
		t2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - function that adds eleent to hash table
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * @value: value to store
 * Return: 1 if successes, 0 otherwise if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	new = add_n_shash(&(ht->array[idx]), key, value);

	if (new == NULL)
		return (0);

	add_i_shash(ht, new);

	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 *
 * @ht: pointer to the shash table
 * @key: pointer to key of the shash
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k_index;
	shash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k_index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the keys and values of the shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->shead;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - function prints the shash table in reverse ordere
 * in reverse
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
