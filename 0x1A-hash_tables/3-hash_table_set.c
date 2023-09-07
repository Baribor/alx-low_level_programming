#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Hash table
 * @key: The key of the value
 * @value: The value to set
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem;
	char *elem_value;
	long int index;

	if (!ht)
		return (0);
	if (!key || strlen(key) == 0)
		return (0);

	new_elem = malloc(sizeof(hash_node_t));
	if (!new_elem)
		return (0);

	elem_value = malloc(sizeof(char) * strlen(key) + 1);
	if (!elem_value)
		return (0);
	strcpy(elem_value, value);

	new_elem->key = (char *)key;
	new_elem->value = elem_value;
	index = key_index((unsigned char *)key, ht->size);
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}
