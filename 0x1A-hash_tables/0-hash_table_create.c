#include "hash_tables.h"
/**
 * hash_table_create - a function to create a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *new_table;

/* allocate memory for the new table */
	new_table = malloc(sizeof(hash_table_t));
/*return null if allocation was not successful */
	if (new_table == NULL)
		return (NULL);
/*allocate memory for the array insidethehash table*/
/* which size is (size) */
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
/* check if the allocation failed hence free the*/
/* memory that was allocated to prevent memory leaks*/
	if (new_table->array == NULL)
	return (NULL);

/*intiallize array element to null */
	for  (i = 0; i < size; i++)

		new_table->array[i] = NULL;
	return (new_table);
}
