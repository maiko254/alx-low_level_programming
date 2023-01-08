#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *item, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];
			while (item != NULL)
			{
				tmp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
