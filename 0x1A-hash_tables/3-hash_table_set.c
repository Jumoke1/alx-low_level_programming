#include "hash_tables.h"

/**
 * hash_table_set - add an element in a hash table
 * @ht: A pointer to the hash table.
 * @key: The key to add and it cannot be an empty string.
 * @value: The value to the assinged key
 * Return: 1 or return 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	char *value_c;
	unsigned long int index, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_c = strdup(value);
	if (value_c == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = value_c;
			return (1);
		}
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(value_c);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = value_c;
	temp->next = ht->array[index];
	ht->array[index] = temp;

	return (1);
}
