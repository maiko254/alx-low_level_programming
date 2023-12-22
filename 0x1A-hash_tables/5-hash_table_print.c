#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count;
	hash_node_t *node;

	printf("{");
	if (ht != NULL)
	{
		count = 0;
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node != NULL)
			{
				printf("%s\"%s\": \"%s\"", count > 0 ? ", " : "", node->key, node->value);
				count++;
			}
		}
	}
	printf("}\n");
}
