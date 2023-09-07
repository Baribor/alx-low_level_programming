#include "hash_tables.h"

/**
 * key_index - Computes the index of a key
 *
 * @key: The key to compute
 * @size: size of the hash map
 * Return: The index attached to the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
