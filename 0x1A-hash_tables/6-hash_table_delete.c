#include "hash_tables.h"

/**
 * hash_table_delete - a function to deletes a hash table.
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *newnode1, *newnode2;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			newnode1 = ht->array[i];
			while (newnode1 != NULL)
			{
				newnode2 = newnode1->next;
				free(newnode1->key);
				free(newnode1->value);
				free(newnode1);
				newnode1 = newnode2;
			}
		}
	}
	free(head->array);
	free(head);
}
