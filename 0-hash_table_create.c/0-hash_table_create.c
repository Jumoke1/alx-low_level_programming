#include "hash_tables.h"
/**
 * hash_table_create - a function to create a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *temp;

	hash_table_t temp = malloc(sizeof(hash_table_t));

	if (temp == NULL)
		return (NULL);

	temp->size = size;
	temp->array = malloc(sizeof(hash_node_s));

	if (temp->array == NULL)
		return (NULL);
	for (int i = 0 ; i < size; i++)
		temp->array[i] = NULL;

	return (temp);
}
