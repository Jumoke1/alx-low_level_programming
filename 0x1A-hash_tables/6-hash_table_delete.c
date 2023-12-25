#include "hash_tables.h"

/**
 * hash_table_delete -a function that deletes a hash table.
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *tempnode1, *tempnode2;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tempnode1 = ht->array[i];
			while (tempnode1 != NULL)
			{
				tempnode2 = tempnode1->next;
				free(tempnode1->key);
				free(tempnode1->value);
				free(tempnode1);
				tempnode1 = tempnode2;
			}
		}
	}
	free(head->array);
	free(head);
}
