#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key of the value to retrieve
 * Return: the value associated with the key
 *         NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node, *temp;
	const unsigned char *k;

	k = (const unsigned char *)key;

	index = key_index(k, ht->size);

	node = ht->array[index];
	temp = node;

	if (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}
