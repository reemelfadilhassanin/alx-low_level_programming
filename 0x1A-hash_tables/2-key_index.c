#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key using hash_djb2.
 * @key: pointer the key
 * @size: size of array of hash table
 * Return: index key/value stored in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
