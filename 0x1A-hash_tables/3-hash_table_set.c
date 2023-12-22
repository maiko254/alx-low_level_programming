#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to the hash table to add or update
 * @key: key to the value
 * @value: value associated with the key
 * Return: 1 if element is added successfully
 *         0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, temp;
	hash_node_t *current_node;
	unsigned long int index, count;
	const unsigned char *k;

	node = create_node(key, value);
	count = 0;

	k = (const unsigned char *)key;
	index = key_index(k, ht->size);

	current_node = ht->array[index];

	if (current_node == NULL)
	{
		if (count == ht->size)
		{
			free(node);
			return (0);
		}
		ht->array[index] = node;
		count++;
	}
	else
	{
		if (strcmp(current_node->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			temp = *current_node;
			*node->next = temp;
			ht->array[index] = node;
		}
	}

	return (1);
}

/**
 * create_node - creates an element
 * @key: key to value added to node
 * @value: value associated with key
 * Return: pointer to newly created node
 *         0 otherwise
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	if (key[0] == '\0')
		return (0);
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	node->next = NULL;
	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}
