#include "hash_tables.h"
/**
 * key_index -  a function that gives u the index of a key
 * @key: key
 * @size:size of te array of the hash table
 * Return:index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	unsigned long int  hash_value  = hash_djb2(key);
	unsigned long  int  index = hash_value % size;

	return (index);
}
