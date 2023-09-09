#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: A pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *temp;
	unsigned long int j;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			temp = ht->array[j];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
