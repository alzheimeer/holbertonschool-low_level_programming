#include "hash_tables.h"

/**
 * hash_table_get - gets an element
 * @ht: pointer to hash table
 * @key: key
 * Return: string value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux;
	unsigned long int index = 0;

	if (!ht || !key || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (0);
}
