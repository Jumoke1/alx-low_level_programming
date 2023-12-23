#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key
 * Return: null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	temp = ht->array[ind];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return ((temp == NULL) ? NULL : temp->value);
}
