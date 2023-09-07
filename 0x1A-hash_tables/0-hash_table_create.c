#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the hash table
 * Return: the new hash table or NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->array = calloc(sizeof(hash_node_t *), size);
	if (!hash_table->array)
		return (NULL);

	return (hash_table);
}
