#include "hash_tables.h"

/**
 * key_index - computes the index to store key/value pair in array
 * @key: key to hash
 * @size: size of the array
 * Return: the index at which the key/value pair should be stored
 *         in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashval;

	hashval = hash_djb2(key);

	return (hashval % size);
}
