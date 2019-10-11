#include "hash_tables.h"
/**
 * hash_table_create - initialize a hash table
 * @size: size of the array of the table
 * Return: the hash table initialize
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	/* malloc table*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	/*malloc pointers to the head nodes*/
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	/*Initialize elements pointing*/
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
