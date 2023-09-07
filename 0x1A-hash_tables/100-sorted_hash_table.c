#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the hash table
 * Return: the new hash table or NULL if error
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	hash_table = malloc(sizeof(shash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->array = calloc(sizeof(shash_node_t), size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Hash table
 * @key: The key of the value
 * @value: The value to set
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_elem, *current;
	long int index;

	if (!ht)
		return (0);
	if (!key || strlen(key) == 0)
		return (0);

	new_elem = malloc(sizeof(shash_node_t));
	if (!new_elem)
		return (0);

	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	new_elem->snext = NULL;
	new_elem->sprev = NULL;

	if (!ht->shead)
	{
		ht->shead = new_elem;
		ht->stail = new_elem;
	}
	else
	{
		current = ht->shead;

		while (current && strcmp(current->key, key) < 0)
			current = current->snext;

		if (!current)
		{
			ht->stail->snext = new_elem;
			new_elem->sprev = ht->stail;
			ht->stail = new_elem;
			return (1);
		}

		if (current == ht->shead)
		{
			new_elem->snext = current;
			ht->shead = new_elem;
			current->sprev = new_elem;
		}
		else
		{
			new_elem->sprev = current->sprev;
			new_elem->snext = current;
			current->sprev->snext = new_elem;
			current->sprev = new_elem;
		}
	}
	return (1);
}

/**
 * shash_table_print - Prints a hash table
 *
 * @ht: Hash table to print
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	putchar('{');
	for (current = ht->shead; current; current = current->snext)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->stail)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse
 *
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	putchar('{');
	for (current = ht->stail; current; current = current->sprev)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current != ht->shead)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 *
 * @ht: hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		if (current)
		{
			while (current)
			{
				temp = current->next;
				free(current->value);
				free(current->key);
				free(current);
				current = temp;
			}
		}
		else
		{
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 *
 * @ht: The sorted hash table
 * @key: key of the value to retrieve
 * Return: The value or NULL if key doesn't exist
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *current;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	current = ht->array[idx];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
