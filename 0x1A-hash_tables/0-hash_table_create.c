#include "hash_tables.h"

/**
 * hash_table_create - create the hash table
 * @size: the size of the hash table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_t = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!hash_t)
	{
		return (NULL);
	}
	hash_t->size = size;
	hash_t->array = (hash_node_t**)calloc(hash_t->size, sizeof(hash_node_t*));
	for (i = 0; i < hash_t->size; i++)
		hash_t->array[i] = NULL;
	return (hash_t);
}
