#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key should be stored in the array.
 * @key: The key string
 * @size: The size of the array in the hash table
 *
 * Return: The index where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	ireturn (index);
}

