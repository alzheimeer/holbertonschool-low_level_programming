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
	hash_node_t *new_node;
	hash_node_t *head;
	unsigned long int i, size;

	if (!ht || !key || !*key || !value)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	size = ht->size;
	i = key_index((const unsigned char *)key, size);
	head = ht->array[i];
	if (head == NULL)
	{
		new_node->next = head;
		head = new_node;
		return (1);
	}
	else
	{
		while (head)
		{
			if (!strcmp(key, head->key))
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
	}
	return (0);
}
