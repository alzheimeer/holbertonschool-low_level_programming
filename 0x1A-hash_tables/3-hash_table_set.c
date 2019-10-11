#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: key inside the hash table - can not be an empty string
 * @value: value to pair with key - must be duplicated - can be an empty string
 * Return: 1 success 0 failure
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !*key || !value)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
